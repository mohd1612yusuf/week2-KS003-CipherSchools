#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int attendence;
    float total_marks;
    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};
class Bank_client
{
    private:
    string name;
    int credit_number;
    int cvv;
    string user_name;
    string password;
    publlic:
    string name;
    void set_credit_card_number(int credit_number)
    {
        this->credit_number=credit_number;
        cout<<"The address of the object calling this function is "<<this;
    }
    int get_creditcardnumber()
    {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void setallthestuffatonce(int credit_number,int name,int pass)
    {
        this->credit_number=credit_number;
        this->name=name;
        this->password=pass;
    }
};
int main()
{
    // Student a,b,c;
    // a.name="Rohit";
    // a.attendence=90;
    // a.total_marks=69;
    // a.calculate_percentage();
    Bank_client a,b,c;
    a.name="rohan";
    a.set_credit_card_number(983593);
    cout<<"The address of this object is "<<&a<<endl;
    // a.get_creditcardnumber();
    return 0;
}