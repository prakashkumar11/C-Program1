
// EXAMPLE-02 Array Of Object...

#include<iostream>
#include<conio.h>
using namespace std;

class company
{
    char id[10];
    char name[20];
    char dep[20];

public :
    void getdata(void);
    void display(void);
};

void company :: getdata(void)
{
    cout <<"\nEnter Id... " ;
    cin >> id;
    cout <<"Enter Name... " ;
    cin >> name;
    cout <<"Enter Department... " ;
    cin >> dep;
    cout <<endl;
}

void company :: display(void)
{
    cout <<"\nId : " << id << endl;
    cout <<" Name : " << name << endl;
    cout <<" Department : " << dep << endl;
    cout <<" Press Enter To Continue...";
    getch();
}

int main()
{
    company manager[2], teamlead[3];
    for(int i=0; i<2; i++)
    {
        cout <<"Enter Details Of Manager " <<i+1;
        manager[i].getdata();
    }
    for(int i=0; i<3; i++)
    {
        cout <<"Enter Details Of TeamLead " <<i+1;
        teamlead[i].getdata();
    }
    cout << endl;
    for(int i=0; i<2; i++)
    {
        cout <<"Details Of Managers " <<i+1;
        manager[i].display();
    }
    for(int i=0; i<3; i++)
    {
        cout <<"Details Of TeamLead " <<i+1;
        teamlead[i].display();
    }
    return 0;
}
