#include <iostream>
using namespace std;
class bank
{
    int balance = 10000;

public:
    int dowithdrawal()
    {
        int wd, a;
        cout << "\n Enter Amount:";
        cin >> a;
        if (a >= 100 && a <= (balance - 100))
        {
            wd = balance - a;
            balance = wd;
            cout << "\n Total Balance:" << balance;
        }
        else
        {
            cout << "\n Sorry \n Invelid Balance In Your Account.";
        }
        return wd;
    }
    int dodiposit()
    {
        int d, b;
        cout << "\n Enter Amount:";
        cin >> b;
        if (b <= 50000 && b >= 0)
        {
            d = balance + b;
        }
        else
        {
            cout << "\n Sorry\n Less Then 50000 Amount Diposit. ";
        }
        balance = d;
        cout << "\n Total Balance:" << balance;

        return d;
    }
    int docheackbalance()
    {
        int a;
        a = balance;
        cout << "\n Total Balance:" << a;
    }
};
int main()
{
    int x, z, balance = 10000, withdrawal, diposit, check_balance;
    bank account;

    do
    {
        cout << "\n\n Total Amount:" << balance;
        cout << "\n1 Withdrawal";
        cout << "\n2 Diposit";
        cout << "\n3 Check Balance";
        cout << "\n0 Exit";
        cout << "\n Enter Your Choise:";
        cin >> x;

        switch (x)
        {
        case 1:
            account.dowithdrawal();
            break;
        case 2:
            account.dodiposit();
            break;
        case 3:
            account.docheackbalance();
            break;
        case 0:
            break;
        default:
            cout << "Wrong Choise:";
            break;
        }
        cout << "Continue for Bank Servis(Yes=1 / No=0)";
        cin >> z;
        if (z == 0)
        {
            x = 0;
        }
    } while (x != 0);
    cout << "Thank you For Banking";
}
