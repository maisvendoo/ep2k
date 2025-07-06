#ifndef     EP2K_H
#define     EP2K_H
 
#include    "vehicle-api.h"
 
//---------------------------------------------------------------------
//
//---------------------------------------------------------------------
class EP2k : public Vehicle
{
 public:

     /// Конструктор класса
     EP2k(QObject *parent = Q_NULLPTR);

     /// Деструктор класс
     ~EP2k();

 private:

 };
 
 #endif // EP2K_H