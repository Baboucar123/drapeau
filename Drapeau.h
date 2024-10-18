#ifndef DRAPEAU_H
#define DRAPEAU_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QVBoxLayout>

class Drapeau : public QWidget
{
   Q_OBJECT

public:
   Drapeau(QWidget *parent = nullptr);
   Drapeau(QString C1, QString C2, QString C3, QString type, QString title, QString photo);
   ~Drapeau();

private:
   QHBoxLayout *Horiz_layout;
   QVBoxLayout *Vertic_layout;
   QLabel *label = new QLabel(this);

   QPixmap *img0 = new QPixmap("/home/ciel2024/Images/spain.png");
   QPixmap *img1= new QPixmap("/home/ciel2024/Images/port.png");

};

#endif // DRAPEAU_H
