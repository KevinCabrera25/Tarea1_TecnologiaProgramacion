// Tarea 1.cpp 
// Kevin de Jes�s Vel�zquez Cabrera

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a, b; // Declaramos 2 variables para almacenar en "a" los casos del programa y "b" para salir del programa
	int numero; // Variable para par o impar
	int i, numfact, fact = 1; // Variables para problema factorial
	// Variables para Fibonacci
	int numFibo; // N�mero a buscar
	bool hallar = false; // Hasta encontrar el n�mero ingresado el ciclo se detendr�
	int sucesion = 1; // Inicia la sucesi�n en 1
	int num_previo = 0; // Almacena el n�mero previo durante los ciclos
	int almacenar = 0; // Sirve para igualar el n�mero anterior  y es usado en la suma de los elementos de la sucesi�n

	do // Creamos el men� del programa 
	{
		

		cout << "Escoge una opcion del menu para proceder al problema: " << endl;
		cout << "\n \n" << endl;
		cout << "1. Sucesion de Fibonacci" << endl;
		cout << "2. Area de un rombo" << endl;
		cout << "3. Numero par e impar" << endl;
		cout << "4. Factorial" << endl;
		cout << "5. Salir del menu" << endl;
		cout << "\n" << endl;
		cout << "Ha escogido la opcion: " << endl;
		cin >> a; // Guarda la respuesta del usuario

		switch (a) // Diferentes casos seg�n la opci�n del usuario
		{
			case 1:
				system("CLS"); // Limpia la pantalla
				cout << "Sucesion de Fibonacci" << endl;
				cout << "\n" << endl;
				cout << "Ingrese un numero y se verificara si esta en la Sucesion de Fibonacci, " << endl;
				cout << "de ser asi, la sucesion se detendra hasta encontrarlo: " << endl;
				cin >> numFibo;
				cout << "Sucesion de Fibonacci: " << endl;

				while (hallar == false)
				{
					cout << sucesion << endl; // Se muestra el valor de la sucesi�n en cada vuelta
					if (sucesion >= numFibo) // Si la variable suma es mayor o igual al n�mero que queremos 
					{
						hallar = true; // Entonces la variable "hallar" ser� verdadera y  detendr� el ciclo
						if (sucesion == numFibo) // Si el n�mero se encuentra dentro de la sucesi�n se imprime el siguiente mensaje
						{
							cout << "El numero ingresado se encuentra dentro de la Sucesion de Fibonacci" << endl;
						}
						else // Si el n�mero no se encuentra dentro de la sucesi�n se imprime el siguiente mensaje
						{
							cout << "El numero ingresado no pertenece a la Sucesion de Fibonacci" << endl;
						}
						
					}
					
					//Procedimiento Sucesi�n de Fibonacci
					num_previo = sucesion; // La sucesion se almacena en el numerio previo 
					sucesion = sucesion + almacenar; // La sucesi�n es igual al mismo n�mero + la variable almacenar
					almacenar = num_previo; // Almacena el n�mero anterior para la siguiente iteraci�n del ciclo
				}
				break;

			case 2:
				system("CLS"); // Limpia la pantalla
				cout << "Area de un rombo" << endl;
				cout << "\n" << endl;
				float area, diagonal_M, diagonal_m;
				cout << "Cuanto mide la diagonal mayor del rombo?: ";
				cin >> diagonal_M;
				cout << "Cuanto mide la diagonal menor del rombo?: ";
				cin >> diagonal_m;
				area = diagonal_M * diagonal_m / 2;
				cout << "Area del rombo: " << area << endl;
				cout << endl;
				break;

			case 3:
				system("CLS"); // Limpia la pantalla
				cout << "Numero par e impar" << endl;
				cout << "\n" << endl;
				cout << "Digite un numero entero y se verificara si es par o impar: " << endl;
				cin >> numero;
				if (numero % 2 == 0) // Si el numero ingresado es divisible entre 2
				// "%" Realiza la divisi�n de numeros enteros y devuelve el residuo de la divisi�n
				{
					cout << "El numero ingresado es par" << endl;
				}
				else
				{
					cout << "El numero ingresado es impar" << endl;
				}
				break;

			case 4:
				system("CLS"); // Limpia la pantalla
				cout << "Factorial" << endl;
				cout << "\n" << endl;
				cout << "Digita un numero y se mostrara en factorial: " << endl;
				cin >> numfact;
				if (numfact < 0) // Si el n�mero ingresado es menor a 0
				{
					fact = 0; // Entonces el factorial ser� 0
				}
				else
				{
					if (numfact == 0) // Si el n�mero ingresado es igual a 0
					{
						fact = 1; // Entonces el factorial ser� 1
					}
					else // Si es mayor que 0
					{
						for (i = 1; i <= numfact; i++) // Desde 1 hasta el n�mero ingresado por cada iteraci�n
						{
							fact = fact * i; // Multiplica todos los valores del ciclo
						}
					}
				}
				cout << "Factorial: " << fact << endl; // Se imprime el factorial del n�mero ingresado

				break;

			case 5:
				system("CLS"); // Limpia la pantalla
				cout << "Seguro que quieres salir??" << endl;
				cout << "1. SI" << endl;
				cout << "2. NO" << endl;
				cin >> b;
				if (b == 1)
				{
					return 0;
				}
				else
				{
					system("CLS"); // Limpia la pantalla
					return main(); // Regresa al men� principal
				}
		}
		
	} while (a != 5); // Se repite el men� hasta que el valor ingresado es distinto de 5
	{
		system("pause");
		return main(); // Regresa al men� principal
	}
	 
}
