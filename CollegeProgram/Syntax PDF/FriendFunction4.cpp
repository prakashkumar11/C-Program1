#include<iostream>
#include<conio.h>

using namespace std;

class rani;
class rahul
{
private :
    int hi;
public :
    void disp();
};

class rani
{
private :
    int bye;

    friend void rahul :: disp();
};

void rahul :: disp()
{
    rani love;
    rahul hate;
    love.bye = 143;
    hate.hi = 322;

    cout <<"Rani Says : " << love.bye << endl;
    cout <<"Rahul Says: " << hate.hi << endl;
}

int main()
{
    rahul what;
    what.disp();

    return 0;
}
