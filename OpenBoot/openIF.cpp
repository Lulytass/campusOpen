#include <iostream>

using namespace std;

int main()
{
    //Usando un if, crear una condición que compare si la variable numeroIf es positivo, negativo, o 0.
    int numeroIf=0;
    cout<<"ingrese un numero: ";
    cin>> numeroIf;
    if(numeroIf<0)
    cout << "el numero es negativo"<<endl;
    else if (numeroIf==0)
    cout << "el numero es 0";
    else
    cout << "el numero es positivo";
    //Crea un bucle While, este bucle tendrá que tener como condición que la variable numeroWhile
    //sea inferior a 3, el bloque de código que tendrá el bucle deberá:
    //Incrementar el valor de la variable en uno cada vez que se ejecute.
    //Mostrarlo por pantalla cada vez que se ejecute.
    int numeroWhile=0;
    cout<<"\ningrese un numero: ";
    cin>> numeroWhile;
    while(numeroWhile<3)
    {
         numeroWhile+=1;
        cout << numeroWhile<<endl;
    }
    //Para el bucle Do While, deberás crear la misma estructura que en el While, pero solo se debe ejecutar una vez.
    int numeroDoWhile=0;
    cout<<"\ningrese un numero: ";
    cin>> numeroDoWhile;
    do
        numeroDoWhile+=1;
        while(numeroDoWhile==numeroDoWhile-1);
        cout<<numeroDoWhile<<endl;
    //Para el bucle For, crea una variable numeroFor, esta variable tendrá como valor 0 y su condición será que la
    //variable sea igual o menor que 3, se irá incrementando en 1 su valor cada vez que se ejecute y deberá mostrarse por pantalla.
    cout<<"Ejercicio con For"<<endl;
        for(int numeroFor=0;numeroFor<=3;numeroFor++)
            cout<<numeroFor<<endl;
    //Por último, para el Switch, deberás crear la variable estacion, y distintos case para las cuatro estaciones del año.
    //Dependiendo del valor de la variable estacion se deberá mandar un mensaje por consola informando de la estación en la que está.
    //También habrá que poner un default para cuando el valor de la variable no sea una estación.
    int estacion;
    cout<<"elija una opcion: \n1-Verano.\n2-Otoño. \n3-Invierno. \n4-Primavera."<<endl;
    cin>>estacion;
    switch(estacion)
    {
        case 1:
            cout<< "Hace mucho calor!";
            break;
        case 2:
            cout<< "Empezaron a perder las hojas los arboles";
            break;
        case 3:
            cout<< "Abrigate que hace frio";
            break;
        case 4:
            cout<< "Empiezan a florecer las plantas";
            break;
        default:
            cout<<"lo que ingresaste no fue una estacion";
            break;
    }
    return 0;
}
