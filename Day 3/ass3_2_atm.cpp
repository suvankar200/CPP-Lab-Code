#include <iostream>
#include <string>
using namespace std;

class ATM_pin_check
{
private:
    string accountno;

    string name;
    float balance;
    int pin;

public:
    ATM_pin_check()
    {
        accountno = "259400";
        name = "Suvankar";
        balance = 18000;
        pin = 1234;
    }
    bool check_pin();
    void money_withdral();
    void view_balance();
    void money_tarnfer();
};
bool ATM_pin_check ::check_pin()
{
    int pin;
    cout << "Enter your pin" << endl;
    cin >> pin;

    if (pin == 1234)
    {
        cout << "Corect pin enter";
        return true;
    }
    else
    {
        cout << "Incorrect pin enter";
        return false;
    }
}
void ATM_pin_check ::money_withdral()
{
    float amount;
    cout << "Enter the amount of money";
    cin >> amount;
    if (amount < balance)
    {

        cout << "Your money " << amount << "is withdral done";
        balance = balance - amount;
    }
    else
    {
        cout << "Inseficient balance";
    }
}
void ATM_pin_check ::view_balance()
{
    cout << "your name " << name << endl;
    cout << "Your balance is  " << balance << endl;
}
void ATM_pin_check::money_tarnfer()
{
    float money;
    string id;
    cout << "Enter the id which id you want to transfer money ";
    cin >> id;

    cout << "Enter the amount of money you want to transfer ";
    cin >> money;
    if (money < balance)
    {

        cout << "Your money transfer amount " << money << " is complete in " << id << " this id" << endl;
        balance = balance - money;
    }
    else
    {
        cout << "Inseficient balance";
    }
}
int main()
{

    ATM_pin_check customer;
    if (customer.check_pin())
    {
        int choice;
        do
        {
            cout << "\n1.viewbalance\n2.transfermoney\n3.money withdral\n4.Quit \nenter your choice";
            cin >> choice;
            switch (choice)
            {
            case 1:
                customer.view_balance();
                break;
            case 2:
                customer.money_tarnfer();
                break;
            case 3:
                customer.money_withdral();
                break;
            case 4:
                break;
            default:
                break;
            }
        } while (choice < 4);
    }
    return 0;
}
