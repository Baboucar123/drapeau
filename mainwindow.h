#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Color.h>
#include <Drapeau.h>
#include <QPushButton>
#include <QHBoxLayout>

#include <QStackedLayout>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   MainWindow(QWidget *parent = nullptr);
   ~MainWindow();

   //--- Déclaration des boutons ---//
   QPushButton *B1 = new QPushButton("ALLEMAGNE");
   // Créer les boutons pour tous les autres drapeaux
   QPushButton *B2 = new QPushButton("AUTRICHE");
   QPushButton *B3 = new QPushButton("BELGIQUE");
   QPushButton *B4 = new QPushButton("BULGARIE");
   QPushButton *B5 = new QPushButton("ESTONIE");
   QPushButton *B6 = new QPushButton("FRANCE");
   QPushButton *B7 = new QPushButton("HONGRIE");
   QPushButton *B8 = new QPushButton("IRLANDE");
   QPushButton *B9 = new QPushButton("ITALIE");
   QPushButton *B10 = new QPushButton("LETONIE");
   QPushButton *B11 = new QPushButton("LETUANIE");
   QPushButton *B12 = new QPushButton("LUXEMBURG");
   QPushButton *B13 = new QPushButton("PAYS_BAS");
   QPushButton *B14 = new QPushButton("ROUMANIE");
   QPushButton *B15 = new QPushButton("ESPAGNE");
   QPushButton *B16 = new QPushButton("PORTUGAL");

public slots:
   void Drapeau_ALLEMAGNE();
   // Créer les slots de tous les autres drapeaux
    void Drapeau_AUTRICHE();
    void Drapeau_BELGIQUE ();
    void Drapeau_BULGARIE ();
    void Drapeau_ESTONIE ();
    void Drapeau_FRANCE();
    void Drapeau_HONGRIE ();
    void Drapeau_IRLANDE ();
    void Drapeau_ITALIE ();
    void Drapeau_LETONIE ();
    void Drapeau_LETUANIE ();
    void Drapeau_LUXEMBURG ();
    void Drapeau_PAYS_BAS ();
    void Drapeau_ROUMANIE ();
    void Drapeau_ESPAGNE ();
    void Drapeau_PORTUGAL ();
private:

   Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

