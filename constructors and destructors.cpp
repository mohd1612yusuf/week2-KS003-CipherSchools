#include<iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float img;
    public:
    Complex(int real_value,int img_value)
    {
        real=real_value;
        img=img_value;
    }
    void set_parameters(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void SqdistfromOrigin()
    {
        float dist;
        dist=real*real + img*img;
        cout<<"The distance from origin is : "<<dist;
        return;
    }
};
class New_account
{
    public:
    int amount;
    int days;
    New_account(int amount_initial, int days_initial)
    {
        amount=amount_initial;
        days=days_initial;
        cout<<"The constructor is called now";
    }
    void print_account_details()
    {
        cout<<"The amount is "<<amount;
        cout<<"The number of days is "<<days;
    }
    ~New_account()
    {
        cout<<"Now the use of the object is complete and the object is getting destroyed";
    }
    void initial()
    {
        amount=0;
        days=0;
    }
};
class motorbike()
{
    public:
    int num_wheels;
    int lights;

};
int main()
{
    New_account a(0,0);
    a.print_account_details();
    New_account b(100,5);
    a.print_account_details();
    cout<<endl<<"Here  all the functions and calculations take place"<<endl;
    // a.initial();
    // a.amount++;
    // a.days++;
    // Complex a,b;
    // a.set_parameters(3,4);
    // a.SqdistfromOrigin();
    Complex(3,3);
    Complex(3,5);
    return 0;
}