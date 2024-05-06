//Write a program to create a file "Product" for write three five product name...
/*#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Product");
    char p1[10]="Lux";
    char p2[10]="Patanjali";
    char p3[10]="Detol";

    fout <<p1<<p2<<p3;
    fout.close();

    return 0;
} */

//Write a program to create a file "Rupees" for write file product rates...
/* #include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Rupees");
    float lux = 20;
    float patanjali=30;
    float detol=40;

    fout <<lux <<patanjali <<detol;

    fout.close();

    return 0;
} */

// Write a program to read data from two files

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin1, fin2;
    fin1.open("Product");
    fin2.open("Rupees");

    char p1[10], p2[10], p3[10];
    float R1,R2,R3;

    fin1>>p1>>p2>>p3;
    fin2>>R1>>R2>>R3;

    cout <<p1<<"="<<R1<<"\n";
    cout <<p2<<"="<<R2<<"\n";
    cout <<p3<<"="<<R3<<"\n";

    fin1.close();
    fin2.close();

    return 0;

}
