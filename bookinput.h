#ifndef BOOKINPUT_H
#define BOOKINPUT_H

#include <QMainWindow>
#include <QTextEdit>
#include <QTableView>
#include <QPushButton>
#include "dataobjecttablemodel.h"

namespace Ui {
class BookInput;
}

class BookInput : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookInput(QWidget *parent = 0);
    ~BookInput();

private slots:

    void on_pushButtonAdd_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonDisplay_clicked();

private:
    void setupGUI();
    Ui::BookInput *ui;
    DataObjectTableModel *model;
    QTableView *tableView;
//    QPushButton *newBook;
//    QPushButton *delBook;
//    QPushButton *viewBooks;
//    QTextEdit *display;
};

#endif // BOOKINPUT_H
