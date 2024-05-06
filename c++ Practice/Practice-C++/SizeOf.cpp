#include<iostream>
using namespace std;

int main()
{
	int a = 4;
	double b = 1.90;
	char c = 'g';
	int sizeinteger = sizeof(a);
	double sizedouble = sizeof(b);
	char sizechar = sizeof(c);
	
	cout << "size of integer is " <<sizeinteger << "bytes \n";
	cout << "size of double is " <<sizedouble <<"bytes \n";
	cout << "size of char is " <<sizechar <<"bytes \n";
	
	return 0;
}
