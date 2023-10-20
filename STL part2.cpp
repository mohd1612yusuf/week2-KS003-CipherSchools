#include <iostream>
#include <stack>
#include <map>
using namespace std;
int main()
{
    queue<int> a;
    a.push(5);
    a.push(6);
    a.push(7);
    cout<<a.front();
    a.pop();
    cout<<a.back()<<endl;
    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty";
    }
    else
    {
        cout<<"The stack is empty";
    }
    a.pop();
    a.pop();
    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty";
    }
    else
    {
        cout<<"The stack is empty";
    }
    return 0;
}