#include <iostream>
using namespace std;
class bank
{
protected:
    int balance, acc_no;
    string name;

public:
    int account_number;
    void setdata(string name, int acc_no, int balance)
    {
        cout << "Account Holder Name:" << endl;
        cin >> name;
        cout << "Account Number:" << endl;
        cin >> account_number;
        cout << "Acoount Holder Name:" << name << endl;
        cout << "Account Number:" << account_number << endl;
        balance = balance;
        cout << "Initial Balance:" << balance << endl;
    }
    float withdraw(float a)
    {
        if (a > balance)
        {
            cout << "Insufficient Balance" << endl;
            exit(0);
        }
        else
        {
            balance -= a;
            return balance;
        }
    }
    float diposite(float a)
    {
        balance += a;
        return balance;
    }
    float fbalance()
    {
        return balance;
    }
};
class savingaccount : public bank
{

public:
    savingaccount(string name, int acc_no, int balance)
    {
        setdata(name, acc_no, balance);
    }
    float withdraw(float a)
    {
        return bank::withdraw(a);
    }
    float diposite(float a)
    {
        return bank::diposite(a);
    }
    float fbalance()
    {
        return bank::fbalance();
    }
    void makechoice()
    {
        cout << "\nPlease Choice from Menu" << endl;
        cout << "1:Withdrawal" << endl;
        cout << "2:Diposite" << endl;
        cout << "3:Current Balance" << endl;
        cout << "4:Loan and EMI" << endl;
        cout << "0:Exit" << endl;
    }
};
class loan
{
private:
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

public:
    void setvalue()
    {
        cout << "Enter the loan amount: ";
        cin >> loan_amount;
        cout << endl;
        cout << "Enter the interest rate: ";
        cin >> interest_rate;
        cout << endl;
        cout << "The number of years: ";
        cin >> number_of_years;
    }

    void loancal()
    {
        total_amount = (loan_amount) + (number_of_years * loan_amount * (interest_rate / 100.00));
        monthly_amount = total_amount / (number_of_years * 12);
    }
    void showloan()
    {
        if (loan_amount >= 50000)
        {
            cout << "\n----------------------Details-----------------" << endl;
            cout << "Total amount to be paid: " << total_amount << endl;
            cout << "Total interest: " << total_amount - (loan_amount) << endl;
            cout << "Monthly amount to be paid: " << monthly_amount << endl;
        }
        else
            cout << "\nError!!!Minimum Amount of Loan is 50000";
    }
};
int main()
{
    float a, x;
    int choice;
    cout << "Welcome In Banking" << endl;
    loan ok;
    savingaccount ha("Hardik", 5000, 1);
    do
    {
        ha.makechoice();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Withdrawal Amount:" << endl;
            cin >> a;
            x = ha.withdraw(a);
            cout << "Total Balance after Withdrawal:" << x << endl;
            break;
        case 2:
            cout << "Enter Diposite Amount:" << endl;
            cin >> a;
            cout << "Total Balance after Diposite:" << ha.diposite(a);
            break;
        case 3:
            cout << "Current Balance:" << ha.fbalance();
            break;
        case 4:
            ok.setvalue();
            ok.loancal();
            ok.showloan();
            break;

        case 0:
            break;
        }
    } while (choice != 0);
}
