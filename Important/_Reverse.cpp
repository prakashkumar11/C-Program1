#include<iostream>
using namespace std;

void Triangle()
{
	float base, height, area;
	
	cout <<"Enter Base And Height : ";
	cin >>base>>height;
	
	area = base*height*0.5;
	cout <<"\nArea Of Triangle : "<<area;
}

void Revese()
{
	int num, rem, rev=0;
	
	cout <<"\nEnter numbers to reverse : "<<endl;
	cin >>num;
	
	while(num>0)
	{
//		rem=num%10;
//		rev=(rev*10)+rem;
		num=num/10;
		cout<<rem;
	}
}

int main()
{
	void Triangle();
	Triangle();
	
	void Revese();
	Revese();
}
