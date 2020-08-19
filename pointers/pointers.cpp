#include <iostream>

using namespace std;

int main()
{
	//change pointer value
	int m = 29;

	cout << "&m = " << &m << "\tm=" << m << endl;

	int* ab = &m;

	cout << "&m = " << &m << "\tm=" << m << endl;

	*ab = 34;
	
	cout << "&m = " << &m << "\tm=" << m << endl;

	*ab = 7;

	cout << "&m = " << &m << "\tm=" << m << endl;

	// &m = 0x???
	// ab = &m
	// m  = 29
	// *ab = 7
	cout << "&m = " << &m << "\tab=" << ab << "\tm=" << m << "\t*ab=" << *ab << endl;


}
