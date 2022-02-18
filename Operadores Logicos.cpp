// Operadores Logicos.cpp 
// Kevin de Jesús Velázquez Cabrera

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, n;
    
    cout << "Realizaremos una operacion. Digita dos numeros m, n, estos seran elevados a la potencia m, n" << endl;
    cout << "respectivamente y multiplicados, ademas se multiplicaran por n/m y si el resultado es distinto" << endl;
    cout << "a la raiz de m entonces se imprimira falso" << endl;
    cout << "\n" << endl;
    cout << "Ingrese dos numeros: " << endl;
    cin >> m;
    cin >> n;
    if((pow(m, m) * pow(n, n)) * (n / m) != sqrt(m) )
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }

}
