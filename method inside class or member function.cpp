#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account {
public:
    // Attributes
    string name;
    float balance;
public:
    // Inside Method
    void deposit(float amount)
    {
        balance +=  amount;
        cout << "Updated Balance after deposit is = " << fixed << setprecision(2) << balance << '\n';
    }
    void withdraw(float amount)
   {
       balance -= amount;
       cout << "Updated Balance after withdraw is = " << fixed << setprecision(2) << balance << '\n';
    }
};

int main()
{
   // Creating object
    Account faysal_account;
    faysal_account . name = "Faysal Khan";
    faysal_account . balance = 100000.00;

    faysal_account . deposit(10000.00);
    faysal_account . withdraw(5500.50);

   return 0;
}
