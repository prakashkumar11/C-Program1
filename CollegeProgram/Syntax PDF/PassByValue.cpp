// Call By Value & Pass By Value using function...!

/* #include<iostream>

using namespace std;

int add(int, int);
int main()
{
    int num1 = 10, num2 = 20, sum;
    sum = add(num1, num2); // call by value & Pass By Value...
    cout <<"Addition = " << sum << endl;
    return 0;
}

int add(int x, int y)
{
    int total;
    total = x + y;

    return(total);
}
  */

  //-----------------------Pass By Pointer & Pass By Address---------------------------

  #include<iostream>

  using namespace std;

  void age(int*, int*);

  int main()
  {
      int chanda = 16, chhotu = 18;
      age(&chanda, &chhotu);
      cout <<"Chanda Age's : " << chanda << endl;
      cout <<"Chhotu Age's : " << chhotu << endl;

      return 0;
  }

  void age(int*ch, int*chh)
  {
      *ch = 18;
      *chh = 16;
  }
