
#include<iostream>

using namespace std;

int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int i, j;
    for(i=0; i<2; i++)
    {
        for(i=0; i<3; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
