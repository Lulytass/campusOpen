#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona
{
public:
    Persona(char[]="", int=0, int=0);
    void setNombre(char[]);
    void setEdad(int);
    void setTelefono(int);
    const char* getNombre();
    int getEdad();
    int getTelefono();
private:
    int edad, telefono;
    char nombre[15];
};

#endif // PERSONA_H_INCLUDED
