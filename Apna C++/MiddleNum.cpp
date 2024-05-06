#include<iostream>
using namespace std;

// int middleNumber(int a, int b, int c)
// {
//     if((a<b && b<c) || (c<b && b<a))
//         return b;
//     else if((b<a && a<c) || (c<a && a<b))
//         return a;
//     else
//         return c;
// }

// int middle(int x, int y, int z)
// {
//     if(x<y && y<z || z<y && y<x)
//         return y;
//     else if(y<x && x<z || z<x && x<y)
//         return x;
//     else
//         return z;
// }

// 1 2 3==> (1<2 && 2<3 || 3<2 && 2<1)  (2<1 && 1<3 || 3<1 && 1<2)

int middle(int a, int b, int c) {
    if((a<b && b<c) || (c<b && b<a))
        return b;
    else if((b<a && a<c) || (c<a && a<b))
        return a;
    else 
        return c;
}

int middleNumber(int p, int q, int r)
{
    if(p<q && q<r || r<q && q<p)
        return q;
    else if(q<p && p<r || r<p && p<q)
        return p;
    else
        return r;
}

int main()
{
    int res=middleNumber(12, 13, 14);
    cout <<res;


    return 0;
}