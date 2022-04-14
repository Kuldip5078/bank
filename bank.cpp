#include <iostream>
using namespace std;
class bank
{
    int balance = 10000;

public:
    int dowithdrawal()
    {
        int wd, a;
        cout << "\n enter amount:";
        cin >> a;
        if (a >= 100 && a < (balance - 100))
        {
            wd = balance - a;
            balance = wd;
            cout << "\n youre balance is:" << balance;
        }
        else
        {
            cout << "\n sorry invalid balance....";
        }
        return wd;
    }
    int dodiposite()
    {
        int d, b;
        cout << "\n enter amount:";
        cin >> b;
        if (b <= 50000 && b >= 0)
        {
            d = balance + b;
        balance = d;
        cout << "\n youre balance is:" << balance;
        }
        else
        {
            cout << "\n sorry amount less then 50000....";
        }
        return d;
    }
    int dochakbalance()
    {
        int a;
        a = balance;
        cout << "\n youre balance is:" << a;
    }
};
int main()
{
    int x, balance = 10000, withdrawal, diposit, chak_balance;
    bank do_withdrawal, do_diposite, do_chak_balance;

    cout << "\n total amount:" << balance;

    cout << "\n1 withdrawal:";
    cout << "\n2 diposit:";
    cout << "\n3 chak_blance:";

    cout << "\n enter your choise:";
    cin >> x;

    switch (x)
    {
    case 1:
        do_withdrawal.dowithdrawal();
        break;
    case 2:
        do_diposite.dodiposite();

        break;
    case 3:
        do_chak_balance.dochakbalance();

        break;
    default:
        cout << "wrong choise";
        break;
    }
}