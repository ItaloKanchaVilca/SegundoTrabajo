
#include <iostream>
using namespace std;



//2.27
/*
int main()
{
	int main()
	{
		char val;
		cout << "ingrese un caracter: " << endl;
		cin >> val;

		int x = static_cast<int>(val);

		if (x >= 65 && x <= 90 || x >= 97 && x <= 122)
		{
			cout << val << "es una letra";
		}
		else
		{
			cout << val << "no es una letra";
		}
		return 0;
	}
	return 0;
}
*/

//2.28
/*
int main()
{
	int num, unidades, decenas, centenas, millar;
	cout << "ingrese unn numero de 4 digitos para imprimirlo al revez:" << endl;
	cin >> num;

	unidades = num % 10;
	num = num / 10;

	decenas = num % 10;
	num = num / 10;

	centenas = num % 10;
	num = num / 10;

	millar = num % 10;
	num = num / 10;

	cout << "numero impreso al reves :" << endl;
	cout << unidades << "\t" << decenas << "\t" << centenas << "\t" << millar << endl;


	return 0;
}
*/

//2.29
int main()
{
	
	cout << "LONGITUDES DE CARA DESDE 0 A 4:" << endl;
	int n;
	cout << "LONGITUD DE LA CARA" << "\t" << "AREA DEL CUBO" << "\t" << "VOLUMEN DEL CUBO" << endl;

	n = 0;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 1;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 2;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 3;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 4;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	return 0;
}