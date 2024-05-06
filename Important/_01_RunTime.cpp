//RunTime Pollymorphism...
#include<iostream>
using namespace std;
class Run1
{
	public :
		void show()
		{
			cout <<"Good Day..."endl;
		}
};

class Run2 : public Run1
{
	public :
		void show()
		{
			cout <<"Good Evening..."<<endl;
		}
};

int main()
{
	Run1 *ptr;  Run2 obj;
	ptr=&obj;
	
	ptr->show();
	
	
	return 0;
}
