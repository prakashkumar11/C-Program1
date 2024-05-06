#include<iostream>
using namespace std;

void pattern1(int num) {
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=num; j++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }
}

int main()
{
    pattern1(5);

    return 0;
}