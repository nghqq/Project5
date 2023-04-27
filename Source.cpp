#include<iostream>
using namespace std;
//#define TICKET

void main() 
{
	setlocale(LC_ALL, "Russian");
#ifdef TICKET
	int number; // число введеное с клавиатуры
	cout << "¬ведите число: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;

	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif // TICKET

}
