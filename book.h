#ifndef BOOK_H
#define BOOK_H

#include <QStringList>
#include <QDate>
#include "dataobject.h"

class Book : public DataObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ getTitle WRITE setTitle)
    Q_PROPERTY(QString authors READ getAuthors WRITE setAuthors)
    Q_PROPERTY(QString isbn READ getIsbn WRITE setIsbn)
    Q_PROPERTY(QDate publicationDate READ getPublicationDate WRITE setPublicationDate)
public:
    Book();
    Book(QString t, QString a, QString i, QDate p);

    void setTitle(QString t);
    void setAuthors (QString a);
    void setIsbn (QString i);
    void setPublicationDate (QDate p);

    QString getTitle() const;
    QString getAuthors() const;
    QString getIsbn() const;
    QDate getPublicationDate() const;

private:
    QString title;
    QString authors;
    QString isbn;
    QDate publicationDate;

};

#endif // BOOK_H
