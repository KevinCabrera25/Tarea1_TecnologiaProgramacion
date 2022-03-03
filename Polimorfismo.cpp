// Polimorfismo.cpp 
// Kevin Cabrera

#include <iostream>
using namespace std;

// Declaración de la clase base

class Animales
{
private: 	// Atributos privados
	string especie;
	int cantidad;

public: // Atributos publicos
	Animales(string, int); // Declaración del constructor Animales
	virtual void peligro();
};

Animales::Animales(string Especie, int Cantidad) // Se asignan los valores al constructor Animales
{
	// Asignamos valores del constructor a las variables de la clase
	especie = Especie; 
	cantidad = Cantidad;	
}

void Animales::peligro() // Definimos el método peligro
{
	// Se piden datos al usuario para ser almacenados
	cout << "Especie: " << especie << endl;
	cout << "Ejemplares: " << cantidad << endl;

	// Método de condicionales para acceder y modificar las variables privadas
	if (cantidad < 5)
	{
		cout << "Extinta en el medio silvestre";
		cout << "\n";
	}
	if (cantidad >= 5 && cantidad < 15)
	{
		cout << "En peligro de extincion";
		cout << "\n";
	}
	if (cantidad >= 15 && cantidad < 25)
	{
		cout << "Especie amenazada";
		cout << "\n";
	}
	if (cantidad >= 25)
	{
		cout << "Protección Especial";
		cout << "\n";
	}

}

// Subclase 1
class Jaguar : public Animales // Accederá a los atributos de la clase base
{
private: 
	string region; // Se declara una varible como atributo privado

public:
	Jaguar(string, int, string); // Constructor de clase
	void peligro();
};

// Se accede a la clase base para heredar los atributos
Jaguar::Jaguar(string Especie, int Cantidad, string Region) : Animales(Especie, Cantidad)
{
	region = Region;
}

void Jaguar::peligro() // Método para la subclase
{
	Animales::peligro();
	cout << "Region de la especie: " << region << endl;
};

// Subclase 2
class Guacamayas : public Animales // Accederá a los atributos de la clase base
{
private:
	int huevos; // Atributos privados

public:
	Guacamayas(string, int, int); // Atributos públicos
	void peligro(); // Se llama a la función peligro integrando los atributos de esta subclase
};

Guacamayas::Guacamayas(string Especie, int Cantidad, int Huevos) : Animales(Especie, Cantidad) // Se heredan atributos
{
	huevos = Huevos; // Se le asignan datos a la variable de la clase Guacamayas
}

void Guacamayas::peligro() // Método peligro para los atributos de la Subclase Guacamayas
{
	Animales::peligro();
	cout << "Cantidad de huevos: " << huevos << endl;
}

int main()
{
	// Arreglo con puntero para acceder a cada elemento

	Animales* Arreglo[3];

	// Se asignan valores a las variables de cada elemento del arreglo dependiendo de la Subclase
	Arreglo[0] = new Jaguar("Panthera Onca", 8, "Chiapas");
	Arreglo[1] = new Guacamayas("Ara macao", 4, 10);
	Arreglo[2] = new Guacamayas("Ara militaris", 16, 13);

	// Se llama al método peligro para cada elemento del arreglo
	Arreglo[0]->peligro();
	cout << "\n";
	Arreglo[1]->peligro();
	cout << "\n";
	Arreglo[2]->peligro();
	cout << "\n";
	
	return 0;

}
