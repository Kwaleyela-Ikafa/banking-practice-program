#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do {
        cout << "************************" << endl;
        cout << "Enter your choice " << endl;
        cout << "************************" << endl;

        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. exit" << endl;
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks for visiting" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 4);
    
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << endl;
}

double deposit(){
    double amount = 0;

    cout << "Enter deposit amount: ";
    cin >> amount;

    if(amount > 0) {
        return amount;
    }else {
        cout << "Enter a valid amount" << endl;
        return 0;
    }

}
