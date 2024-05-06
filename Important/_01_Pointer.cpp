//Pointer in c++

#include<iostream>
using namespace std;
int main()
{
	int x, *p;
	cout<<"Enter value = ";
	cin>>x;
	
	p=&x;
	cout<<"value = "<<*p;
	
	return 0;
}
