// Example Of Virtual Base Class In C++
#include<iostream>
#include<conio.h>

using namespace std;

class student
{
protected:
    char name[100] = "Chhotu Sharma";
};

class Exam : virtual public student
{
protected:
    int marks = 100;
public:
    void disp_marks(void)
    {
        cout <<"Marks : " <<marks<<endl;
    }
};

class Project : virtual public student
{
protected:
    int p_marks = 200;
public:
    void disp_pmarks(void)
    {
        cout <<"Project Marks : " <<p_marks <<endl;
    }
};

class Result : public Exam, public Project
{
public:
    void disp_total(void)
    {
        cout <<"Name : " <<name <<endl;
        cout <<"Total Marks : " <<marks+p_marks <<endl;
    }
};

int main()
{
    Result obj;
    obj.disp_marks();
    obj.disp_pmarks();
    obj.disp_total();

    return 0;
}
