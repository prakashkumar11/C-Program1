//Function All
#include<iostream>
using namespace std;

//------------------------------------------------------------------------------

//void myFunction()
//{
//	cout <<"My function is executed";
//}
//int main()
//{
//	myFunction();
//	
//	return 0;
//}

//-------------------------------------------------------------------------------

// void myFun1()
// {
// 	cout <<"I am executed ";
// }
// int main()
// {
// 	myFun1();
// 	myFun1();
// 	myFun1();
// 	
// 	return 0;
// }

//----------------------------------------------------------------------------------

//int main()
//{
//	myFunc1();  //Generated Error
//	
//	return 0;
//}
//
//void myFun1()
//{
//	cout <<"This is function";
//}

//---------------------------------------------------------------------------------

//Function Declaration
//void fun1();
//
////The main method
//int main()
//{
//	fun1();  //call the function
//	
//	return 0;
//}
////Function Definition
//void fun1()
//{
//	cout <<"This is colorfull function";
//}

void func1();
void func2();
void func3();

int main()
{
	func1();
	func2();
	func3();
	
	return 0;
}

void func1()
{
	int i,num;
	cout<<"Enter any number : ";
	cin>>num;
	while(i<=9)
	{
		i++;
		cout <<num*i <<endl;
	}
}

void func2()
{
	float base, height, Area;
	cout <<"Enter Base & Height : ";
	cin>>base>>height;
	
	Area=base*height*0.5;
	cout <<Area<<endl;
}
void func3()
{
	int num, rev=0, temp=0;
	
	cout <<"Enter number ";
	cin >>num;
	
	while(num!=0)
	{
		temp=num%10;
		rev=(rev*10)+temp;
		num=num/10;
	}
	cout <<rev;
	
}
