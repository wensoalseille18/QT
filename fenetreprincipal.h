#ifndef FENETREPRINCIPAL_H
#define FENETREPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class FenetrePrincipal;
}

class FenetrePrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipal(QWidget *parent = 0);
    ~FenetrePrincipal();

private slots:
    void on_FenetrePrincipal_iconSizeChanged(const QSize &iconSize);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FenetrePrincipal *ui;
    //Les grand menu
    QMenu *acteur;
    QMenu *help;
    QMenu *setting;

//Ajouter un sous menu
    QAction *ajouter_acteur;
    QAction *recherche;
    QAction *affichage;
    QAction *test;
};

#endif // FENETREPRINCIPAL_H
