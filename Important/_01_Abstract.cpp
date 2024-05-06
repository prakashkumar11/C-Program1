//Abstract class

#include<iostream>

class A
{
	public:
	virtual void show()=0;
	
	void disp()
	{
		cout<<"Hey...I am Base class...";
	}
};

class B : public A
{
	public:
		void show()
		{
			cout<<"Hey...I am Derived class...";
		}
};

int main()
{
	B obj;
	obj.disp();
}
