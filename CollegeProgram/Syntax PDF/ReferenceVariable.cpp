
#include<iostream>

using namespace std;

int main()
{
    int name = 10;
    int &nickname = name;

    cout <<" Value Of name      : " << name << endl;
    cout <<" Value Of nickname  : " << &nickname << endl;
    cout <<endl;
    cout <<" Address Of name    : " << name << endl;
    cout <<" Address Of nickname:" << &nickname << endl;
    return 0;
}
