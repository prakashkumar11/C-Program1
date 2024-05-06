//Prime numbers

#include<iostream>
using namespace std;

class A
{
	int num, count;
	public :
		void input()
		{
			cout<<"Enter number to check prime or not : ";
			cin>>num;
		}
		void output()
		{
			count=0;
			for(int i=1; i<=num; i++)
			{
				if(num%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Prime Number...";
			}
			else
			{
				cout<<"Not Prime Number...";
			}
		}
};

int main()
{
	A ob;
	ob.input();
	ob.output();
	
	return 0;
}
