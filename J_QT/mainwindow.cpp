#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QStringList list;
    //list << "aaaaa" << "bbbb" << "CCCCC";
    //StringListModel *slmodel = new StringListModel(list,this);
    //ui->listView->setModel(slmodel);
    //ui->listView1->setModel(slmodel);
    //ui->listView1->setSelectionModel(ui->listView->selectionModel());
    //slmodel->insertRows(1,4);

    //QDirModel *model = new QDirModel;
   // QModelIndex parentIndex = model->index(QDir::currentPath());
    //int numRows = model->rowCount(parentIndex);
    //for (int row = 0; row < numRows; ++row) {
    //    QModelIndex index = model->index(row, 0, parentIndex);
    //    QString text = model->data(index, Qt::DisplayRole).toString();
    //           // Display the text in a widget
    //}
    //QStringList numbers;
    //numbers << "One" << "Two" << "Three" << "Four" << "Five";
    //QAbstractItemModel *model = new StringListModel(numbers);

    //ui->listView->setModel(model);

    QStringList list;
    list << "aaaaa" << "bbbb" << "CCCCC";
    StringListModel *slmodel = new StringListModel(list,this);
    SpinBoxDelegate *spdelegate = new SpinBoxDelegate(this);

    ui->listView->setItemDelegate(spdelegate);
    ui->listView->setModel(slmodel);


}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
QDirModel *model = new QDirModel;
//model的尺寸可以从rowCount()与columnCount()中得出
//这些函数通常都需要一个表示父项的model index。
QModelIndex parentIndex = model->index(QDir::currentPath());
int numRows = model->rowCount(parentIndex);
for (int row = 0; row < numRows; ++row)
{
    //model indexes用来从model中访问数据项，数据项用行，列，父项model index定位。
    //为了访问model顶层项，可以使用QModelIndex()指定。
    QModelIndex index = model->index(row, 0, parentIndex);
    QString text = model->data(index, Qt::DisplayRole).toString();
    //数据项为不同的角色提供不同的数据。为了获取数据，除了model index之外，还要指定角色。
}
*/
