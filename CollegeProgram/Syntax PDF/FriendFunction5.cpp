//Friend Function

#include<iostream>
#include<conio.h>

using namespace std;

class rani;
class rahul
{
private :
    int a;
public :
    void getdata(void)
    {
        cout <<"Enter Rahul's Total Marks : ";
        cin >> a;
    }
    friend void add(rahul, rani);
};

class rani
{
private:
    int b;
public :
    void getdata(void)
    {
        cout <<"Enter Rani's Total Marks : ";
        cin >> b;
    }
    friend void add(rahul, rani);
};

void add(rahul m, rani n)
{
    cout <<"Marks : " <<m.a + n.b << endl;
}

int main()
{
    rahul k;
    rani v;

    k.getdata();
    v.getdata();

    add(k,v);

    return 0;
}


