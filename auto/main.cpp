#include <iostream>
#include "class.h"
using namespace std;
//PROTOTIPO FUNCION SUMAR
int suma(int,int,int);
int main()
{
    // PARTE DEL EJERCICIO CON FUNCION SUMAR
    int result,n,n1,n2,cantidad;
    cout << "ingrese 3 numeros: ";
    cin >> n>>n1>>n2;
    result=suma(n,n1,n2);
    cout<<"el resultado de la suma es: "<<result<<endl;
    //PARTE DEL EJERCICIO AUTOMOBIL
    cout<<"\nIndique cuantas puertas quiere agregarle al coche: ";
    cin>>cantidad;
    Automobil miCoche;
    int totalPuertas= miCoche.sumadorPuertas(cantidad);
    cout<< "Su coche ahora tiene: "<<totalPuertas<<" puertas"<<endl;
    return 0;
}
//DECLARACION FUNCION SUMAR
 int suma(int n, int n1, int n2)
    {
        return n+n1+n2;
    }
