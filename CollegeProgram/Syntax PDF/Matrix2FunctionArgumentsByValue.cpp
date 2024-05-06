
#include<iostream>
#include<conio.h>


using namespace std;

class matrix
{
    int item[2][2];
public :
    void getdata(void);
    void putdata(void);
    void sub(matrix, matrix);
};

void matrix :: getdata(void)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> item[i][j];
        }
    }
}

void matrix :: putdata(void)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << item[i][j] << '\t';
        }
    }
    cout << endl;
}

void matrix :: sub(matrix x, matrix y)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            item[i][j] = x.item[i][j] - y.item[i][j] ;
        }
    }
}

int main()
{
    matrix a, b, result;

    cout <<"Value Of A :\n";
    a.getdata();
    cout <<"Value Of B :\n";
    b.getdata();

    cout <<"You Entered Matrix A :\n";
    a.putdata();
    cout <<"You Entered Matrix B :\n";
    b.putdata();

    result.sub(a,b);

    cout <<"Subtraction : \n";
    result.putdata();

    return 0 ;
}
