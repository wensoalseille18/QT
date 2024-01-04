#ifndef FORM_NEW_ACTEUR_H
#define FORM_NEW_ACTEUR_H
#include<QFormLayout>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_new_acteur : public QWidget
{
    Q_OBJECT
public:
    explicit Form_new_acteur(QWidget *parent = NULL);

private:
    QFormLayout *formulaire;
    QHBoxLayout *layoutboutton;
    QVBoxLayout *layoutprincipale;

    QLineEdit *tcode;
    QLineEdit *tnom;
    QLineEdit *tprenom;
    QLineEdit *ttelephone;

    QPushButton *bSave;
    QPushButton *bCancel;

signals:

public slots:

};

#endif // FORM_NEW_ACTEUR_H
