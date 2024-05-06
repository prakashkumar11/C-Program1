
#include<iostream>

using namespace std;

void age(int&, int&);

int main()
{
    int chhotu = 18, chanda = 16;
    age(chhotu, chanda);

    cout <<"Chhotu Age's : " << chhotu << endl;
    cout <<"Chanda Age's : " << chanda << endl;
    return 0;
}

void age(int &chh, int &ch)
{
    chh = 16;
    ch = 18;
}
