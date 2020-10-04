#include "Check.h"

Check::Check(int numOfCheck, double amount, bool isCashed) :
    numOfCheck(numOfCheck),
    amountOfCheck(amount),
    isCashed(isCashed)
{}

int Check::getNumOfCheck() {
    return numOfCheck;
}

const Money& Check::getAmount() {
    return amountOfCheck;
}

bool Check::getIsCashed() {
    return isCashed;
}

std::istream& operator >>(std::istream &ins, Check& check) {
    ins >> check.numOfCheck;
    ins >> check.amountOfCheck;
    ins >> check.isCashed;
}

std::ostream& operator <<(std::ostream &outs, Check& check) {
    outs << check.numOfCheck << "\t";
    outs << check.amountOfCheck << "\t";
    outs << check.isCashed;
}
