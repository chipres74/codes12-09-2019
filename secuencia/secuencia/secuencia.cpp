// secuencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int suma;
	int serie;
	n = 0;
	suma = 0;
	serie = 2;
	cout << "Introduce el ultimo valor: ";
	cin >> n;
	while (serie <= n){
		cout << serie << endl;
		suma = suma + serie;
		serie = serie + 2;
	}
	cout << "La suma es: " << suma << endl;
	
}

