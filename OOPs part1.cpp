#include <iostream>
using namespace std;
class Bus
{
    private:
    int number_typers;
    string name;
    int capacity;
    int milege;
    string school_name;
    int number_holidays;
    public:
    void calculatemilege()
    {
        cout<<"The milege is "<<milege;
    }
    void printnameoftruck()
    {
        cout<<"The name of the truck is "<<name;
    }
};
class Car
{
    private:
    int number_typers;
    string name;
    int capacity;
    int milege;
    int number_airbags;
    int ac_consumption;
    public:
    void calculatemilege()
    {
        cout<<"The milege is "<<milege;
    }
    void printnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }
}
class Student
{
    private:
    int marks;
    int attendence;
    string name;
    public:
    void displaymarks()
    {
        cout<<marks;
    }
};
int main()
{
    int marks;
    int attendence;
    string name;

    return 0;
}