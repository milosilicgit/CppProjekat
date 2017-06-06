#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Unesite prvi broj: ";
	cin >> a ;
	cout << "Unesite drugi broj: ";
	cin >> b;
	cout << "Zbir: " << a + b << endl;
	cout << "Razlika: " << a - b << endl;
	cout << "Proizvod: " << a*b << endl;
	if (b != 0) cout << "kolicnik: " << a / b << endl;
	else cout << "Deljenje nulom mije definisano!" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}