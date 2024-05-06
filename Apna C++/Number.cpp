#include<iostream>
using namespace std;

// int printNumber(int i)
// {
//     for(i=1; i<=10; i++)
//         cout <<i <<" ";
// }

// int printNumber1(int num)
// {
//     for(int i=1; i<=num; i++ ) {
//         cout <<i <<" ";
//     }
// }

    int printNumber(int num)
    {
        for(int i=1; i>=num; i--)
            cout <<i <<" ";
    }
int main()
{
    printNumber(10);

    return 0;
}