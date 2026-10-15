#include "AdoptedDogModel.h"

void AdoptedDogModel::reload()
{
    this->beginResetModel();
    dogs.clear();
    for (Dog& d : uServ.getAdoptedDogs())
        dogs.push_back(d);
    this->endResetModel();
}

int AdoptedDogModel::rowCount(const QModelIndex& parent) const
{
    return this->dogs.size();
}

int AdoptedDogModel::columnCount(const QModelIndex& parent) const
{
    return 4;
}

QVariant AdoptedDogModel::data(const QModelIndex& index, int role) const
{
    int row = index.row();
    int column = index.column();

    Dog d = this->dogs[row];

    switch (role)
    {
    case Qt::DisplayRole:
        switch (column)
        {
        case 0: return QString::fromStdString(d.getName());
        case 1: return QString::fromStdString(d.getBreed());
        case 2: return QString::fromStdString(std::to_string(d.getAge()));
        case 3: return QString::fromStdString(d.getPhotograph());
        }
    }

    return QVariant();
}

QVariant AdoptedDogModel::headerData(int section, Qt::Orientation orientation, int role) const
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
