//Write A Programing To Write Data from a file
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("student");
    int roll;
    char name[20];
    float mr;

    cout <<"Enter Roll, Name and Marks : " <<endl;
    cin >>roll >>name >>mr;

    fout <<roll <<"\n";
    fout <<name <<"\n";
    fout <<mr <<"\n";

    fout.close();

    return 0;
}

