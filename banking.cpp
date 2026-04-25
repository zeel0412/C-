#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accNo;
    string name;
    double balance;

public:

    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Balance: ";
        cin >> balance;
    }

    virtual void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Money Deposited!\n";
    }

    virtual void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Done!\n";
        } else {
            cout << "Not enough balance!\n";
        }
    }

    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};


class Savings : public Account {
public:
    void withdraw() override {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (balance - amount >= 500) {
            balance -= amount;
            cout << "Savings Withdraw Success!\n";
        } else {
            cout << "Keep minimum ₹500 balance!\n";
        }
    }
};

class Current : public Account {
public:
    void withdraw() override {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance + 1000) {
            balance -= amount;
            cout << "Current Withdraw Success (Overdraft allowed)\n";
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }
};

int main() {
    int type, choice;

    cout << "1. Savings Account\n2. Current Account\nChoose: ";
    cin >> type;

    Account* acc;

    if (type == 1)
        acc = new Savings();
    else
        acc = new Current();

    acc->createAccount();

    do {
        cout << "\n1.Deposit  2.Withdraw  3.Display  4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            acc->deposit();
        else if (choice == 2)
            acc->withdraw();
        else if (choice == 3)
            acc->display();

    } while (choice != 4);

    delete acc;
    return 0;
}