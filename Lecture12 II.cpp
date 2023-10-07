#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int *p;
    int *q;
    p=&a;
    q=&b;
    a=2;
    b=5;
    *p=3;
    c=*p+*q;
    p+1;
    q+2;
    cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    cout<<"The value of a from the pointer using *(asterisk/ indirection operator)"<<*p<<endl;
    cout<<"The value of c is : "<<c;
    cout<<"The address of a is "<<&a<<"The value of the pointer is "<<p;
    return 0;
}