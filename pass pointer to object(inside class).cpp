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
   // Creating pointer object
    Account*  faysal_account = new Account();

   /*
   (*faysal_account) . name = "Faysal Khan";
    (*faysal_account) . balance = 100000.00;

    (*faysal_account) . deposit(10000.00);
    (*faysal_account) . withdraw(5500.50);  */

    faysal_account -> name = "Faysal Khan";
    faysal_account -> balance = 100000.00;
    faysal_account -> deposit (8500.00);
    faysal_account -> withdraw (6500.50);

    delete faysal_account; // Cleaning up memory

   return 0;
}
