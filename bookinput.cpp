#include "bookinput.h"
#include "ui_bookinput.h"
#include "book.h"

#include <QSharedPointer>
#include <QTextEdit>
#include <QDebug>
#include <QDate>

BookInput::BookInput(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookInput)
{
    ui->setupUi(this);

    Book *book1 = new Book("An Introduction to Design Patterns in C++ with Qt™,2nd Edition", "Alan Ezust; Paul Ezust", "978-0-13-282645-7", QDate(2011,9,1));
    Book *book2 = new Book("Database Principles: Fundamentals of Design, Implementation, and Management Third Edition", "Carlos Coronel; Steven Morris", "978-1-4737-6804-8", QDate(2020,3,1));
    QSharedPointer<Book> spBook1 = QSharedPointer<Book>(book1);
    QSharedPointer<Book> spBook2 = QSharedPointer<Book>(book2);

    model = new DataObjectTableModel(book1);
    model->insertRecord(spBook1);
    model->insertRecord(spBook2);

    setupGUI();

}

BookInput::~BookInput()
{
    delete ui;
}

void BookInput::setupGUI()
{
    tableView = new QTableView() ;
    ui->tableView->setModel(model);
}

void BookInput::on_pushButtonAdd_clicked()
{
    Book *b = new Book();
    QSharedPointer<Book> ptr = QSharedPointer<Book> (b);
    model->insertRecord(ptr, model->rowCount());
}

void BookInput::on_pushButtonDelete_clicked()
{
    int row = ui->tableView->currentIndex().row();
    model->removeRow(row);
}

void BookInput::on_pushButtonDisplay_clicked()
{
    ui->textEdit->setText(model->toString());
}
