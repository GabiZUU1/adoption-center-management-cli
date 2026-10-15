#pragma once
#include "C:\Qt\6.11.0\msvc2022_64\include\QtCore\qabstractitemmodel.h"
#include "AdminService.h"
#include <QModelIndex>

class DogModel :
	public QAbstractTableModel
{
private:
	AdminService& serv;

public:
	DogModel(AdminService& serv) : serv{ serv } {};

	int rowCount(const QModelIndex& parent = QModelIndex()) const override;
	int columnCount(const QModelIndex& parent = QModelIndex()) const override;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

	void deleteDogAtRow(int row);
	void updateDogAtRow(int row, std::string name, std::string breed, int age, std::string photo);

	void refresh();
};