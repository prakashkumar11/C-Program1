#include<iostream>
#include<vector>
using namespace std;


int main()
{
    // create vector declare
    vector<int>v;
    vector<int>v1(5, 1);

    // size and capacity
    cout <<"Size of v : " <<v.size() <<endl;
    cout <<"Capacity of v : " <<v.capacity() <<endl;

    v.push_back(2);
    v.push_back(4);
    v.push_back(10);

    cout <<"size of v : " <<v.size() <<endl;
    cout <<"capacity of v : " <<v.capacity() <<endl;

    // Update values
    v[1]=5;

    cout <<"size of v : " <<v1.size() <<endl;
    cout <<"capacity of v : " <<v1.capacity() <<endl;

    v1.push_back(8);

    cout <<"size of v : " <<v1.size() <<endl;
    cout <<"capacity of v : " <<v1.capacity() <<endl;

    vector<int> v3 = {1, 2, 3, 4, 5};

    cout <<v3.size() <<endl;
    cout <<v3.capacity() <<endl;


}