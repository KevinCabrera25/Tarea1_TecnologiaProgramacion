// Punteros.cpp 
// Kevin de Jesús Velázquez Cabrera

#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
using namespace std;

// Definimos las variables globales y char tendrá un puntero
int numVocales(char *cadena);


int main()
{
    // Limitamos el tamaño de los datos de entrada
    char entrada[100];
    cout << "Introduce una palabra y se contara el numero de vocales contenidas en esta: " << endl;
    cin >> entrada;

    // Se crea una variable a la cual se le asignará la variable global con los datos de entrada del usuario
    int vocales = numVocales(entrada);
    cout << "La cantidad de vocales en la palabra que has introducido es de: " << vocales <<endl;
        
}

// Funcion numVocales
int numVocales(char *cadena)
{ 
    // La variable vocales se inicializa en 0
    int vocales = 0;
   
    // Se inicia un ciclo creando una variable indice iniciada en 0 y se va aumentado en cada iteración en uno hasta encontrar el carecter nulo. Recorriendo así toda la cadena
    for (int indice = 0; cadena[indice] != '\0'; ++indice)
    {
        // Si la letra introducida ha sido mayúscula, esta será convertida a minuscula, así se podrá comparara con las vocales minúsculas
        char letra = tolower(cadena[indice]);

        // Se comparan las letras introducidas con las vocales minusculas y si resulta ser una vocal entonces se aumentará el contador del ciclo
        if
            (
                letra == 'a' || // Si la letra actual es a, o
                letra == 'e' || // Si la letra actual es e, o
                letra == 'i' || // Si la letra actual es i, o
                letra == 'o' || // Si la letra actual es o, o
                letra == 'u'    // Si la letra actual es u
                )

        {
            // Se aumenta el contador del ciclo para la siguiente iteración
            vocales++;
        }
       

    }
    return vocales;
}