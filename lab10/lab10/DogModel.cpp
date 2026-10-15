#include <vector>
#include <QString>
#include "Dog.h"
#include "DogModel.h"

int DogModel::rowCount(const QModelIndex& parent) const
{
	return this->serv.getVector().size();
}

int DogModel::columnCount(const QModelIndex& parent) const
{
	return 4;
}

QVariant DogModel::data(const QModelIndex& index, int role) const
{
	int row = index.row();
	int column = index.column();
	std::vector<Dog> dogs = this->serv.getVector();
	Dog d = dogs[row];

	switch (role)
	{
	case Qt::DisplayRole:
		switch (column)
		{
		case 0: return QString{ d.getName().c_str() };
		case 1: return QString{ d.getBreed().c_str() };
		case 2: return QString{ std::to_string(d.getAge()).c_str() };
		case 3: return QString{ d.getPhotograph().c_str() };
		}
	}
	return QVariant();
}

QVariant DogModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
	{
		switch (section)
		{
		case 0: return "Name";
		case 1: return "Breed";
		case 2: return "Age";
		case 3: return "Photograph";
		}
	}
	return QVariant();
}

void DogModel::deleteDogAtRow(int row)
{
	this->beginRemoveRows(QModelIndex(), row, row);
	
	Dog& dog = this->serv.getDogAtPosition(row);
	this->serv.deleteDog(dog);

	this->endRemoveRows();
}

void DogModel::updateDogAtRow(int row, std::string name, std::string breed, int age, std::string photo)
{
	Dog& d = this->serv.getDogAtPosition(row);
	this->serv.updateDog(d, name, breed, age, photo);

	emit this->layoutChanged();
}

void DogModel::refresh()
{
	this->beginResetModel();
	this->endResetModel();
}
