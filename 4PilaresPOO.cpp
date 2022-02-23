// 4PilaresPOO.cpp
// Kevin Velázquez

// Clase 3 Herencia y Encapsulamiento 23/02/2022

#include <iostream>
using namespace std;

// Clase padre o base que brinda los atributos
class Sauropsida
{
	// Se podrá acceder a estos atributos porque se declara public
public: 
	string clade = "Sauropsida";

	//Primer método
	void Sauropsidos()
	{
		cout << "Sauropsida, ";
		cout << "vertebrados ";
	};
};

// Primer clase hija o derivada que heredará los atributos de la clase base y proporcionará nuevas características
class Romeriidans: public Sauropsida
{
	// Se podrá acceder a estos atributos porque se declara public
public:
	string huesos = "gruesos y densos, ";
};

// Segunda  clase hija o derivada que heredará los atributos de la clase anterior y proporcionará nuevas características
class Diapsida : public Romeriidans
{
public:
	string adaptacion = "nadar";
};

int main()
{
	// Se llama a la última clase y se define una variable local para brindarle las características
	Diapsida Reptile;
	// Se llama al método de la primer clase o clase padre/base
	Reptile.Sauropsidos();
	// Se imprimen las características de todas las clases
	cout << Reptile.clade + " " + Reptile.huesos; + " " + Reptile.adaptacion;

	return 0;
}
