#include <iostream>
#include "Check.h"
#include "Money.h"
#include <vector>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int numOfCheck(0);
    double amountOfCheck(0);
    char inputIsCashed;
    char otherCheck('y');
    double deposit(0.0);
    double oldBalance(0.0);
    std::vector<Check> checkVec;

    cout << "Enter the old balance: $";
    cin >> oldBalance;

    while (otherCheck == 'y') {
        cout << "Enter the number of check: #";
        cin >> numOfCheck;

        cout << "Enter the amount of the check: $";
        cin >> amountOfCheck;

        cout << "Was the check cashed? (Enter y/n): ";
        cin >> inputIsCashed;

        Check ch(numOfCheck, amountOfCheck, (inputIsCashed == 'y'));
        checkVec.push_back(ch);
        //[0: {numOfCheck: 1, amountOfCheck: {all_cents: 123}, inputIsCashed: true},
        // 1: {numOfCheck: 2, amountOfCheck: {all_cents: 2445}, inputIsCashed: false}]
        
        cout << "Do you want to enter another check? (Enter y/n): ";
        cin >> otherCheck;
    }
    
    cout << "Please enter your bank depoists. Enter each deposit on a separate line.";
    cout << "Enter the amount as a number to 2 decimal places.";
    cout << "Do not put a '$' before the amount.";
    cout << "Enter a depoist of '0' or '0.00' to stop:";

    double sumOfDeposits(0.0);
    do {
        cin >> deposit;
        sumOfDeposits += deposit;
    } while (deposit != 0.0);

    cout << "===========================================" << endl;
    cout << "Old Balance:" << "\t" << "$" << oldBalance << endl;

    //getting total amount of checks
    Money sum(0.0);
    double rawSum(0.0);
    for (int i(0); i < checkVec.size(); ++i) {
        Check &currCheck = checkVec[i];
        bool isCashed = currCheck.getIsCashed();
        if (isCashed) {
            sum = currCheck.getAmount() + sum;
        }
    }

    cout << "Total Amount Cashed:" << "\t" << "$" << sum.get_value() << endl;
    cout << "Total Amount Deposited:" << "\t" << "$" << sumOfDeposits << endl;

    double newBalance(oldBalance+sumOfDeposits-sum.get_value());
    cout << "New Account Balance:" << "\t" << "$" << newBalance << endl;

    Money sum2(0.0);
    double rawSum2(0.0);
    for (int i(0); i < checkVec.size(); ++i) {
        Check &currCheck = checkVec[i];
        bool isCashed = currCheck.getIsCashed();
        if (!isCashed) {
            sum2 = currCheck.getAmount() + sum2;
        }
    }

    double pendingBalance(newBalance-sum2.get_value());
    cout << "Pending Balance:" << "\t" << "$" << pendingBalance << endl;
    cout << "Balance Difference:" << "\t" << "$" << sum2.get_value() << endl;

    cout << "Cashed checks:" << endl;
    // lists num of check and amount that cashed
    for (int i(0); i < checkVec.size(); ++i) {
        Check &currCheck = checkVec[i];
        bool isCashed = currCheck.getIsCashed();
        if (isCashed) {
            cout << "Check #" << currCheck.getNumOfCheck() << "\t";
            cout << "$" << currCheck.getAmount() << " (cashed)" << endl;
        }
    }

    cout << "Uncashed checks:" << endl;
    // lists num of check and amount that not cashed
    for (int i(0); i < checkVec.size(); ++i) {
        Check& currCheck = checkVec[i];
        bool isCashed = currCheck.getIsCashed();
        if (!isCashed) {
            cout << "Check #" << currCheck.getNumOfCheck() << "\t";
            cout << "$" << currCheck.getAmount() << " (not cashed)" << endl;
        }
    }

    return 0;
}
