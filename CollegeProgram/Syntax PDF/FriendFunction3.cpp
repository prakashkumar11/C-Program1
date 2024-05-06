//Friend Function

#include<iostream>
#include<conio.h>

using namespace std;

class sum
{
    int a, b;
public:
    void get_number(void);
    friend int add(sum s);
};

void sum :: get_number(void)
{
    cout <<"Enter Any Two Numbers : \n";
    cin >>a >>b;
}

int add(sum s)
{
    int temp;
    temp = s.a + s.b;
    return temp;
}

int main()
{
    sum z;
    z.get_number();
    int result ;
    result = add(z);
    cout <<"Sum = " << result << endl;

    return 0;
}

