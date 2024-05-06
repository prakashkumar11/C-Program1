//Class Template...
#include<iostream>
#include<conio.h>

using namespace std;

template <class T> //Class Template

class show
{
    T a, b;
public:
    show(T p, T q)
    {
        a=p; b=q;
    }
   void show()
    {
        cout <<"A : " <<a <<ends <<"B : " <<b <<endl;
    }
};

 main()
{
    show<int> ob(10,20); //class_name <datatype> class_object ;
    ob.show();

    return 0;
}
