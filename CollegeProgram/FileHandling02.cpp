//Write a program to read data from a file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("student");
    int roll;
    char name[20];
    float mr;

    fin >>roll >>name >>mr;

    cout <<"Roll No : " <<roll <<"\n";
    cout <<"Name : " <<name <<"\n";
    cout <<"Marks : " <<mr <<"\n";

    fin.close();

    return 0;

}
