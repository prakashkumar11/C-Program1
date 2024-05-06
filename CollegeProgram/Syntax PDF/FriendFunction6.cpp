//Friend Function
#include<iostream>
#include<conio.h>

using namespace std;

class dell;
class logitech
{
    int product;
public :
    void getdata(void)
    {
        cout <<"Enter Any Number : ";
        cin >>product;
    }
    friend dell; //Friend Class
};

class dell
{
    void lappy(logitech a) // Accessing logitech class, private data in dell class
    {
        cout <<"\nLaptop = " << a.product << endl;//Product is private data of logitech class
    }
    void keybo(logitech);
};

void dell :: keybo(logitech m) // keybo function belongs to dell class
{
    cout <<"Keyboard = " << m.product << endl;
}

int main()
{
    logitech x;
    dell y;

    x.getdata();

    y.lappy(x);
    y.keybo(x);

    return 0;
}
