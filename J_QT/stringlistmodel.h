#ifndef JQMODEL_H
#define JQMODEL_H

#include <QAbstractListModel>
#include <QStringList>

/**
 * 只读模型 只需实现 rowCount data headerData
 *
 * 编辑模型 再实现flags setData
 *
 *
 *
 *
 */

class StringListModel : public QAbstractListModel
{
    Q_OBJECT
    public:
        StringListModel(const QStringList &strings, QObject *parent = 0)
            : QAbstractListModel(parent), stringList(strings) {}
        // READABLE
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        QVariant data(const QModelIndex &index, int role) const;
        QVariant headerData(int section, Qt::Orientation orientation,int role = Qt::DisplayRole) const;
        // EDITABLE
        Qt::ItemFlags flags(const QModelIndex &index) const;
        bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole);
        // INSERT
        bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
        bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());

     private:
        QStringList stringList;
};









#endif // JQMODEL_H
