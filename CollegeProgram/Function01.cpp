//No Return Type without Arguments Function...

#include<iostream>
using namespace std;

void Triangle()
{
    float b,h,A;
    cout <<"Enter number : "<<endl;
    cin >>b>>h;

    A=b*h*1/2;

    cout <<"Area = " <<A<<endl;

}
int main()
{
    void Triangle();
    Triangle();

    return 0;
}
