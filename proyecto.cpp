#include<stdlib.h>
#include<time.h>
#include<string>
#include <iostream>

using namespace std;

int main()
{
    int inte = 5;
    int maximo=20; 
    int minimo=10;
    int valor;
    
    cout << "Bienvenido al juego para adivinar el numero"<< endl;
    cout << "Donde el numero menor es 10 y el mayor es 30"<< endl;
    
    srand(time(NULL));
    int numero = rand() % maximo + minimo;
    int* apv = &numero;
    do {
        cout << "Por favor ingrese el numero para su primer intento:";
        cin >> valor;
        inte--;
        if (valor > *apv) 
        {
            cout << "El numero ingresado es mayor, intente con un numero menor" << endl;
            cout << "Restan " << inte << " intentos"<< endl;
        }
        else if (valor < *apv)
        {
            cout << "El numero ingresado es menor, intente con un numero mayor" << endl;
            cout << "Te quedan " << inte << " intentos" << endl;
        }
        else
        {
            cout << "Felicidades haz ganado, el numero ingresado es correcto :)" << endl;
            return 0;
        }
    } while (inte>0);
    cout << "Perdiste buuuu, haz tenido 5 intentos y fallaste todos."<< endl;
    cout << "El numero era: " << *apv<< endl;
    return 0;

}