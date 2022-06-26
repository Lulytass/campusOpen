#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    Persona p1;
    p1.setEdad(15);
    p1.setNombre("Lucía");
    p1.setTelefono(12345678);
    cout<<"Nombre: "<<p1.getNombre()<<"\nEdad: "<<p1.getEdad()<<"\nTelefono: "<<p1.getTelefono()<<endl;

    return 0;
}
