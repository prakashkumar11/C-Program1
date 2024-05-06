/*Write A program to calculate Addition Of two integers, two float and one integers with float using function overloading
*/

#include<iostream>
#include<conio.h>

using namespace std;

class Addition
{
public:
    void add(int x, int y)
    {
        cout <<"Addition Of Integers : " <<(x+y) <<endl;
    }
    void add(float x, float y)
    {
        cout <<"Addition Of Floats : " <<(x+y) <<endl;
    }
    void add(int x, float y)
    {
        cout <<"Addition of Integer and Float : " <<(x+y) <<endl;
    }
};

int main()
{
    int x,y;
    float a,b;

    cout <<"Enter two integers and two float values : " <<endl;
    cin >>x>>y>>a>>b;

    Addition ob;
    ob.add(a,b);
    ob.add(x,y);
    ob.add(x,a);
    ob.add(y,b);

    return 0;
}
