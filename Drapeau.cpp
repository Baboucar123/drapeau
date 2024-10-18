#include <Drapeau.h>
#include <Color.h>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

///// Classe Drapeau //////
Drapeau::Drapeau(QWidget *parent) : QWidget(parent)
{
   Horiz_layout = new QHBoxLayout(this);
}

Drapeau::Drapeau(QString C1, QString C2, QString C3, QString type, QString title , QString photo) : QWidget()
{
   //--- Objets de la classe Color ---//
   Color *Couleur1 = new Color(C1);
   Color *Couleur2 = new Color(C2);
   Color *Couleur3 = new Color(C3);

   if (type == "vertical") // Drapeau vertical
   {
       QHBoxLayout *Horiz_layout = new QHBoxLayout(this);
       Horiz_layout->addWidget(Couleur1);
       Horiz_layout->addWidget(Couleur2);
       Horiz_layout->addWidget(Couleur3);
       Horiz_layout->setSpacing(0);
       Horiz_layout->setMargin(0);

       QWidget *widget = new QWidget;
       widget->setLayout(Horiz_layout);
       widget->resize(400, 400);
       widget->setWindowTitle(title); // Nom du pays
       widget->show();
   }
   if (type == "horizontal") // Drapeau horizontal
   {
       QVBoxLayout *Vert_layout = new QVBoxLayout(this);
       Vert_layout->addWidget(Couleur1);
       Vert_layout->addWidget(Couleur2);
       Vert_layout->addWidget(Couleur3);
       Vert_layout->setSpacing(0);
       Vert_layout->setMargin(0);

       QWidget *widget = new QWidget;
       widget->setLayout(Vert_layout);
       widget->resize(400, 400);
       widget->setWindowTitle(title);
       widget->show();
   }

   else if (type == "image") // Drapeau en image
       {
           if (photo == "P")
           {
           this->setWindowTitle("Portugal");
           label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
           this->label->setPixmap(*img0);
           this->label->setAlignment(Qt::AlignCenter);
           this->label->setScaledContents(true);
           Vertic_layout->addWidget(this->label);

           QWidget *widget = new QWidget;
           widget->setLayout(Vertic_layout); // type de layout
           widget->resize(700, 400);
           widget->setWindowTitle(title); // Nom du pays
           widget->show();
           }
           else if (photo == "S")
           {
               this->setWindowTitle("ESPAGNE");
               label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
               this->label->setPixmap(*img1);
               this->label->setAlignment(Qt::AlignCenter);
               this->label->setScaledContents(true);
               Vertic_layout->addWidget(this->label);

               QWidget *widget = new QWidget;
               widget->setLayout(Vertic_layout); // type de layout
               widget->resize(700, 400);
               widget->setWindowTitle(title); // Nom du pays
               widget->show();
           }

       }


}

Drapeau::~Drapeau()
{

        // Pas de ressources spécifiques à libérer pour le moment
        delete Horiz_layout;
        delete Vertic_layout;


}

