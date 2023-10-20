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
    void set_credit_card_number(int number)
    {
        credit_number=number;
    }
    int get_creditcardnumber()
    {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void setallthestuffatonce(int number,int name,int pass)
    {
        credit_number=number;
        name=name;
        password=pass;
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
    a.get_creditcardnumber();
    return 0;
}