#ifndef FORM_SEARCH_UPDATE_H
#define FORM_SEARCH_UPDATE_H
#include<QFormLayout>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Search_Update : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Search_Update(QWidget *parent = NULL);

private:
    QLabel *lcode;
    QLabel *lnom;
    QLabel *lprenom;
    QLabel *ltelephone;

    QLineEdit *tcode;
    QLineEdit  *tnom;
    QLineEdit  *tprenom;
    QLineEdit  *ttelephone;

    QPushButton *brechercher;
    QPushButton *bmodifier;

    QGridLayout *gridform;
signals:
//Methode qui execute pour repondre à un signal
public slots:
    void Rechercher();
    void Modifier();
};

#endif // FORM_SEARCH_UPDATE_H
