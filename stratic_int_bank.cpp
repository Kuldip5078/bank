#include <iostream>
using namespace std;
class Bank
{
    int balance, acc_no;
    string name;
public:
    static int xyz;
    Bank(int acc_no, int balance, string name)
    {
        this->acc_no = acc_no;
        this->name = name;
        this->balance = balance;
        xyz++;
    }
    void getDetails()
    {
        cout << "\n " << name << "=" << acc_no << "-" << balance;
    }
    Bank(int a)
    {
        balance = a;
        cout << " \n Total Balance:" << a;
    }
    int dowithdrawal(int a)
    {
        if (a % 100 == 0)
        {
            if (a >= 100 && a <= (balance - 100))
            {
                balance -= a;
                cout << " \n Total Balance:" << balance;
            }
            else
            {
                cout << " \n Sorry \n Invelid Balance In Your Account.";
            }
        }
        else
        {
            cout << " \n Ple Enter the Amount 100 *.";
        }
        return balance;
    }
    int dodiposit(int b)
    {
        if (b <= 50000 && b >= 0)
        {
            balance += b;
        }
        else
        {
            cout << "\n Sorry\n Less Then 50000 Amount Diposit. ";
        }
        cout << "\n Total Balance:" << balance;
        return balance;
    }
    int docheackbalance()
    {
        cout << "\n Total Balance:" << balance;
    }
    int Basic()
    {
        int x;
        cout << "\n\n1  Withdrawal";
        cout << "\n\n2  Diposit";
        cout << "\n\n3  Check Balance";
        cout << "\n\n0  Exit";
        cout << "\n\n   Enter Your Choise:";
        cin >> x;
        return x;
    }
};
int Bank ::xyz;
int main()
{
    int a, x, z, q, balance = 10000, withdrawal, diposit, check_balance;

    Bank ha(1, 5000, "Hardik"), ku(2, 10000, "Kuldeep"), ka(3, 4500, "karan"), da(4, 500, "darshan");
    cout << "Enter the PIN NO.";
    cin >> q;
    if (q == 0000)
    {
        do
        {
            ha.getDetails();
            x=ha.Basic();
            switch (x)
            {
            case 1:
                cout << "\n Enter Amount:";
                cin >> a;
                ha.dowithdrawal(a);

                break;
            case 2:
                cout << "\n Enter Amount:";
                cin >> a;
                ha.dodiposit(a);
                break;
            case 3:
                ha.docheackbalance();
                break;
            case 0:
                break;
            default:
                cout << "\n Wrong Choise:";
                break;
            }
            cout << "\n Continue for Bank Servis(Yes=1 / No=0)";
            cin >> z;
            if (z == 0)
            {
                x = 0;
            }
            else
            {
                cout << " ";
            }
        } while (x != 0);
    }

    else if (q == 0001)
    {
        do
        {
            ku.getDetails();
            x=ku.Basic();
            switch (x)
            {
            case 1:
                cout << "\n Enter Amount:";
                cin >> a;
                ku.dowithdrawal(a);
                break;
            case 2:
                cout << "\n Enter Amount:";
                cin >> a;
                ku.dodiposit(a);
                break;
            case 3:
                ku.docheackbalance();
                break;
            case 0:
                break;
            default:
                cout << "\n Wrong Choise:";
                break;
            }
            cout << "\n Continue for Bank Servis(Yes=1 / No=0)";
            cin >> z;
            if (z == 0)
            {
                x = 0;
            }
            else
            {
                cout << " ";
            }
        } while (x != 0);
    }
    else if (q == 0002)
    {
        do
        {
            da.getDetails();
            x=da.Basic();
            switch (x)
            {
            case 1:
                cout << "\n Enter Amount:";
                cin >> a;
                da.dowithdrawal(a);
                break;
            case 2:
                cout << "\n Enter Amount:";
                cin >> a;
                da.dodiposit(a);
                break;
            case 3:
                da.docheackbalance();
                break;
            case 0:
                break;
            default:
                cout << "\n Wrong Choise:";
                break;
            }
            cout << "\n Continue for Bank Servis(Yes=1 / No=0)";
            cin >> z;
            if (z == 0)
            {
                x = 0;
            }
            else
            {
                cout << " ";
            }
        } while (x != 0);
    }
    else if (q == 0003)
    {
        do
        {
            ka.getDetails();
            x=ka.Basic();
            switch (x)
            {
            case 1:
                cout << "\n Enter Amount:";
                cin >> a;
                ka.dowithdrawal(a);
                break;
            case 2:
                cout << "\n Enter Amount:";
                cin >> a;
                ka.dodiposit(a);
                break;
            case 3:
                ka.docheackbalance();
                break;
            case 0:
                break;
            default:
                cout << "\n Wrong Choise:";
                break;
            }
            cout << "\n Continue for Bank Servis(Yes=1 / No=0)";
            cin >> z;
            if (z == 0)
            {
                x = 0;
            }
            else
            {
                cout << " ";
            }
        } while (x != 0);
    }
    else
    {
        cout << " \nPle Enter The carrect PIN. ";
    }
    cout << "\n Thank you For Banking";
}