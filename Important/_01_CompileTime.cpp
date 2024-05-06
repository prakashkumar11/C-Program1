//Compile Time Polymorphism

#include<iostream>
using namespace std;
//Method Overloading
class Poly
{
	int a,b;
	public :
		void show( int x, int y)
		{
			a=x;
			b=y;
			cout <<a<<" "<<b<<endl;
		}
		void show(float x, float y)
		{
			a=x;
			b=y;
			cout <<a<<" "<<b<<endl;
		}
};

int main()
{
	Poly obj, obj2;
	obj.show(10,20);
	obj2.show(199, 200);
	
	return 0;
}
