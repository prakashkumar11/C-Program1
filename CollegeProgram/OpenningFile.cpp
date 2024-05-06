
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char name[50];
    int roll;

    ofstream outfile("Student"); //connect student file to stream
    cout <<"Enter Name : " <<endl;
    cin >>name;
    cout <<"Enter Roll : " <<endl;
    cin >>roll;

    outfile <<name <<endl; //write to file student
    outfile <<roll <<endl; //write to file student

    outfile.close(); //Disconnect file from stream

    ifstream infile("Student"); //connect file to stream
    infile>> name;  //read from file
    infile>> roll;  //read from file

    cout <<"Name : " <<name <<endl;
    cout <<"Roll : " <<roll <<endl;

    infile.close(); //Disconnect file from stream

    return 0;


}
