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
    float withdraw(float amount);
};

// Implementation of deposit method
void Account :: deposit(float amount)
{
    balance += amount;
    cout << "Updated Balance after deposit is = " << fixed << setprecision(2) << balance << '\n';
}

//  Method outside class
float Account :: withdraw(float amount)
{
    balance -= amount;
    return balance;
}

int main()
{
    // Creating pointer object
    Account* faysal_account = new Account();

    faysal_account -> name = "Faysal Khan";
    faysal_account -> balance = 200000.00;

    // Transactions
    faysal_account -> deposit(10000.00);
    float updated_balance = faysal_account -> withdraw(150000.50);
    cout << "Updated Balance after withdraw is = " << fixed << setprecision(2) << updated_balance << '\n';

    delete faysal_account;  // Cleaning up memory

    return 0;
}
