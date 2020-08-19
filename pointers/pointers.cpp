#include <iostream>

using namespace std;

int main()
{

	int* a = new int{ 5 };
	int* b = new int{ 6 };
	cout << "add value = " << *a + *b << endl;
	cout << "a++ " << a++ << "add value = " << *a + *b << endl;

	//If you forget this, you'll have the memory leak issue!!
	delete a;
	delete b;

}
