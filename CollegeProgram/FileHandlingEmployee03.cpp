//Write a program to create employee record in a file and read record from a file.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // write data
    ofstream fout;
    fout.open("Employee");
    char name[20];
    char id[10];
    char jname[20];
    char add[30];
    double salary;

    cout <<"Enter Employee Name, Id, JobName, Address, Salary : " <<endl;
    cin >>name >>id >>jname >>add >>salary;

    fout <<name <<"\n" <<id <<"\n" <<jname <<"\n" <<add <<"\n" <<salary <<"\n";


    //Read Data
    ifstream fin;
    fin.open("Employee");
    /*char name[20];
    char id[10];
    char jname[20];
    char add[30];
    double salary; */

    fin >>name >>id >>jname >>add >>salary;

    cout <<"Employee Name : " <<name <<"\n" <<"Employee Id : " <<id <<"\n"
    <<"Job Name : " <<jname <<"\n" <<"Address : " <<add <<"\n" <<"salary : " <<salary <<"\n";

    fout.close();

    fin.close();


    return 0;

}
