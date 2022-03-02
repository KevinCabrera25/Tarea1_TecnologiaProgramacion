// Polimorfismo.cpp
//

// 4PilaresPOO.cpp
// Kevin Velázquez

// Clase 3 Herencia y Encapsulamiento 23/02/2022

#include <iostream>
#include <string>
using namespace std;

/*
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
class Romeriidans : public Sauropsida
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
	cout << Reptile.clade + " " + Reptile.huesos; +" " + Reptile.adaptacion;

	return 0;
}
*/

// Clase 5 Polimorfismo

class Persona
{
private: // Atributos privados
	string nombre;
	int edad;

public: 
	Persona(string, int); // Declaracion de constructor Persona
	virtual void mostrar(); // Metodo virtual, con esto podemos trabajar con el Polimorfismo en C++

};
Persona::Persona(string _nombre, int _edad) // Asignamos valores al constructor
{
	nombre = _nombre; // Asignamos el valor que estamos declarando en el constructor a las variables propias de la clase
	edad = _edad;
}

void Persona::mostrar() // Definimos el comportamiento de la funcion o metodo de persona -> mostrar
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	if (edad >= 18)
	{
		cout << "Es mayor de edad" << endl;
	}
};

class Alumno : public Persona
{
private:
	float calificacion;

public:
	
	Alumno(string, int, float); // Constructor de la clase
	void mostrar();
};

Alumno::Alumno(string _nombre, int _edad, float _calificacion) : Persona(_nombre, _edad)
{
	calificacion = _calificacion;
};

void Alumno::mostrar()
{
	Persona::mostrar();
	cout << "Calificacion: " << calificacion << endl;
};

class Profesor : public Persona
{
private:
	string materia;
public:
	Profesor(string, int, string);
	void mostrar();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad)
{
	materia = _materia;
}

void Profesor::mostrar()
{
	Persona::mostrar();
	cout << "Materia: " << materia << endl;
};

int main()
{
	Persona* Arreglo[4];

	Arreglo[0] = new Alumno("Oscar", 21, 8.9);
	Arreglo[1] = new Alumno("Jair", 25, 9);
	Arreglo[2] = new Alumno("Israel", 22, 7.9);
	Arreglo[3] = new Profesor("Miguel", 30, "Tecnologias de la Programacion");

	Arreglo[0]->mostrar();
	cout << "\n";
	Arreglo[1]->mostrar();
	cout << "\n";
	Arreglo[2]->mostrar();
	cout << "\n";
	Arreglo[3]->mostrar();
	cout << "\n";
	
	return 0;
};