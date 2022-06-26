#include "Persona.h"
#include <string.h>
Persona::Persona(char nom[], int e, int tel)
{
    setNombre(nom);
    setEdad(e);
    setTelefono(tel);
}
void Persona::setNombre(char nom[])
{
    strcpy(nombre, nombre);
}
const char* Persona::getNombre()
{
    return nombre;
}
void Persona::setEdad(int e)
{
    edad=e;
}
int Persona::getEdad()
{
    return edad;
}
void Persona::setTelefono(int tel)
{
    telefono=tel;
}
int Persona::getTelefono()
{
    return telefono;
}
