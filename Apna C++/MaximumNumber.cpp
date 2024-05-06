#include<iostream>
using namespace std;

class maxNumber {
    public:
    void max(int x, int y) {
        if(x>y)
            cout <<"x : "<<x;
        else
            cout <<"y : "<<y;
    }
};

int main()
{
    maxNumber obj;
    obj.max(10, 20);
    cout <<endl;
    obj.max(20, 10);

    return 0;
}