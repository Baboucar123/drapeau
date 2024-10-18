#include <Color.h>
#include <QPalette>

//--- Constructeur par défaut ---//
Color::Color(QWidget *parent) : QWidget(parent)
{
}

//--- Constructeur qui prend une couleur comme paramètre ---//
Color::Color(QString couleur)
{
   setGeometry(0, 0, 100, 100);

   this->setAutoFillBackground(true); // Couleur d'arrière-plan

   QPalette myPalette = palette(); // Définir une palette

   myPalette.setColor(QPalette::Window, QColor(couleur)); // Ajouter la couleur passée en paramètre

   setPalette(myPalette); // Palette ajoutée au widget
}

Color::~Color()
{
}
