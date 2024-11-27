#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account {
public:
    // Attributes
    string name;
    float balance;

    // Method declaration
    void deposit(float amount);
    void withdraw(float amount);
};

// Implementation of deposit method
void Account::deposit(float amount)
{
    balance += amount;
    cout << "Updated Balance after deposit is = " << fixed << setprecision(2) << balance << '\n';
}

//  Method outside class
void Account::withdraw(float amount)
{
    balance -= amount;
    cout << "Updated Balance after withdraw is = " << fixed << setprecision(2) << balance << '\n';
}

int main()
{
    // Creating object
    Account faysal_account;
    faysal_account.name = "Faysal Khan";
    faysal_account.balance = 200000.00;

    // Transactions
    faysal_account.deposit(10000.00);
    faysal_account.withdraw(15500.50);

    return 0;
}
