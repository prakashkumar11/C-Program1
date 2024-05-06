// ------------------- ARRAY WITHIN A CLASS...!------------------
                            // THEORY

// -----------------class definition syntax...-------------------
    class class_name
    {
        data member; // array type...
        data_type variable_name[size];

        public :
            data member;
            member function;

    };

//    --------------Class Definition Example----------------

    class student
    {
        int roll[size];   //array within class
        char name[size][20];

        public :
            void getdata(void);
            void display(void);
    };
//    ----------------Function definition-----------------

    void student::getdata(void)
    {
        cin >> name[i];
        cin >> roll[i];
    }

    void student::display(void)
    {
        cout << name[i];
        cout << roll[i];
    }

    // --------------Object Declaration and Function Call------------------
int main()
{
    student st;

    st.getdata();
    st.display();

    return 0 ;
}




