#include "class.h"

Automobil::Automobil()
{
   puertas=2;
}
int Automobil::sumadorPuertas(int num)
{
    if(num>0)
        return puertas+num;
    else
        return puertas;
}
