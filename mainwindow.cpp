#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
   : QMainWindow(parent)
   , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   setWindowTitle("Drapeaux tricolores de l'union européenne (UE)");
   resize(700, 400);

   // Définir l'image d'arrière-plan

   QPixmap bkgnd ("/home/ciel2024/Bureau/ue.jpeg");
   bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio); QPalette palette;
  palette.setBrush(QPalette::Background, bkgnd);
  this->setPalette(palette);

   //--- Mise en page des boutons ---//
   QVBoxLayout *Pagelayout = new QVBoxLayout;
   QHBoxLayout *Hlayout1 = new QHBoxLayout;
   QHBoxLayout *Hlayout2 = new QHBoxLayout;
   QHBoxLayout *Hlayout3 = new QHBoxLayout;

   Pagelayout->addLayout(Hlayout1);
   Pagelayout->addLayout(Hlayout2);
   Pagelayout->addLayout(Hlayout3);



   // Créer des boutons
   QPushButton *B1 = new QPushButton("ALLEMAGNE");
   QPushButton *B2 = new QPushButton("AUTRICHE");
   QPushButton *B3 = new QPushButton("BELGIQUE");
   QPushButton *B4 = new QPushButton("BELGARIE");
   QPushButton *B5 = new QPushButton("ESTONIE");
   QPushButton *B6 = new QPushButton("France");
   QPushButton *B7 = new QPushButton("HONGRIE");
   QPushButton *B8 = new QPushButton("IRLANDE");
   QPushButton *B9 = new QPushButton("Italie");
   QPushButton *B10 = new QPushButton("LETONIE");
   QPushButton *B11 = new QPushButton("LITUANIE");
   QPushButton *B12 = new QPushButton("LUXEMBOURG");
   QPushButton *B13 = new QPushButton("PAYS-BAS");
   QPushButton *B14 = new QPushButton("ROUMANIE");
   QPushButton *B15 = new QPushButton("ESPAGNE");
   QPushButton *B16 = new QPushButton("PORTUGAL");



   // Ajoutez d'autres boutons si nécessaire

   // Ajouter des boutons aux mises en page horizontales
       Hlayout1->addWidget(B1);
       Hlayout1->addWidget(B2);
       Hlayout1->addWidget(B3);
       Hlayout1->addWidget(B4);
       Hlayout1->addWidget(B5);
       Hlayout1->addWidget(B6);
       Hlayout1->addWidget(B7);
       Hlayout2->addWidget(B8);
       Hlayout2->addWidget(B9);
       Hlayout2->addWidget(B10);
       Hlayout2->addWidget(B11);
       Hlayout2->addWidget(B12);
       Hlayout2->addWidget(B13);
       Hlayout2->addWidget(B14);
       Hlayout3->addWidget(B15);
       Hlayout3->addWidget(B16);


   // Ajoutez des boutons aux mises en page si nécessaire

   Pagelayout->addLayout(Hlayout1);
   Pagelayout->addLayout(Hlayout2);

   QWidget *widget = new QWidget;
   widget->setLayout(Pagelayout);
   setCentralWidget(widget);

   //--- Connexion du signal "clicked()" avec le slot de chaque drapeau ---//



   //--- Connexion des boutons avec les slots ---//
   connect(B1, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE()));
   connect(B2, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE()));
   connect(B3, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE()));
   connect(B4, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE()));
   connect(B5, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE()));
   connect(B6, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE()));
   connect(B7, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE()));
   connect(B8, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE()));
   connect(B9, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE()));
   connect(B10, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE()));
   connect(B11, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE()));
   connect(B12, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG()));
   connect(B13, SIGNAL(clicked()), this, SLOT(Drapeau_PAYS_BAS()));
   connect(B14, SIGNAL(clicked()), this, SLOT(Drapeau_ROMANIE()));
   connect(B16, SIGNAL(clicked()), this, SLOT(Drapeau_PORTUGAL()));
   connect(B15, SIGNAL(clicked()), this, SLOT(Drapeau_ESPAGNE()));



   // Connectez d'autres boutons à leurs slots respectifs
}
void MainWindow::Drapeau_ALLEMAGNE() {

   Drapeau *D = new Drapeau("black", "red", "gold", "horizontal", "Allemagne","");
}

void MainWindow::Drapeau_AUTRICHE() {

   Drapeau *D = new Drapeau("red", "white", "red", "horizontal", "Autriche","");
}

void MainWindow::Drapeau_BELGIQUE() {

   Drapeau *D = new Drapeau("black", "yellow", "red", "vertical", "Belgique","");
}

void MainWindow::Drapeau_BULGARIE() {

   Drapeau *D = new Drapeau("white", "green", "red", "horizontal", "Bulgarie","");
}

void MainWindow::Drapeau_ESTONIE() {

   Drapeau *D = new Drapeau("blue", "black", "white", "horizontal", "Estonie","");
}

void MainWindow::Drapeau_FRANCE() {

   Drapeau *D = new Drapeau("blue", "white", "red", "vertical", "France","");
}

void MainWindow::Drapeau_HONGRIE() {

   Drapeau *D = new Drapeau("red", "white", "green", "horizontal", "Hongrie","");
}

void MainWindow::Drapeau_IRLANDE() {

   Drapeau *D = new Drapeau("green", "white", "orange", "vertical", "Irlande","");
}

void MainWindow::Drapeau_ITALIE() {

   Drapeau *D = new Drapeau("green", "white", "red", "vertical", "Italie","");
}

void MainWindow::Drapeau_LETONIE() {

   Drapeau *D = new Drapeau("maroon", "white", "maroon", "horizontal", "Lettonie","");
}

void MainWindow::Drapeau_LETUANIE() {

   Drapeau *D = new Drapeau("yellow", "green", "red", "horizontal", "Lituanie","");
}

void MainWindow::Drapeau_LUXEMBURG() {

   Drapeau *D = new Drapeau("red", "white", "lightblue", "horizontal", "Luxembourg","");
}

void MainWindow::Drapeau_PAYS_BAS() {

   Drapeau *D = new Drapeau("red", "white", "blue", "horizontal", "Pays-Bas","");
}

void MainWindow::Drapeau_ROUMANIE() {

   Drapeau *D = new Drapeau("blue", "yellow", "red", "vertical", "Roumanie","");
}
void MainWindow::Drapeau_ESPAGNE() {

    Drapeau *D = new Drapeau("", "", "", "image", "ESPAGNE", "S");

}
void MainWindow::Drapeau_PORTUGAL() {

    Drapeau *D = new Drapeau("", "", "", "image", "PORTUGAL", "P");

}



MainWindow::~MainWindow() {
   delete ui;
}

