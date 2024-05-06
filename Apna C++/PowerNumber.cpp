#include<iostream>
using namespace std;

// int powerNumber(int num, int pow) {
//     int result=1;
//     for(int i=1; i<=pow; i++) {
//         result=num*result;
//     }
//     return result;
// }

// int powerNumber(int num, int pow) {
//     int res=1;
//     for(int i=1; i<=pow; i++)
//         res=num*res;
//     return res;
// }

// int powerNumber(int num, int pow)
// {
//     int res=1;
//     for(int i=1; i<=pow; i++)
//         res=num*res;
//     return res;
// }

int numberTest(int num) {
    num*num;
}

int main()
{
    int num, pow;
    cout <<"Enter Number ";
    cin >>num;
    cout <<"Enter Power ";
    cin >>pow;

    int isRes=powerNumber(num, pow);
    cout <<"Power of Number "<<isRes;


    return 0;
}