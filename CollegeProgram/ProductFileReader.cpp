// Write a program to read data from two files

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin1, fin2;
    fin1.open("Product");
    //fin2.open("Rupees");

    char p1[10];
    char p2[10];
    char p3[10];
    float R1,R2,R3;

    fin1>>p1>>p2>>p3;
    fin2>>R1>>R2>>R3;
    cout <<p1<<p2<<p3<<endl;
    cout <<R1<<R2<<R3<<endl;


    fin1.close();
    fin2.close();

    return 0;

}
