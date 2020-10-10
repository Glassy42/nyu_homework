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
    return isCashed; //accessor
}

void Check::setIsCashed(bool isCashed) {
    this->isCashed = isCashed; //mutator
}

void Check::setAmount(Money amountOfCheck) {
    this->amountOfCheck = amountOfCheck; 
}

void Check::setNumOfCheck(int numOfCheck) {
    this->numOfCheck = numOfCheck;
}

std::istream& operator >>(std::istream &ins, Check& check) {
    ins >> check.numOfCheck;
    ins >> check.amountOfCheck;
    ins >> check.isCashed;

    return ins;
}

std::ostream& operator <<(std::ostream &outs, Check& check) {
    outs << check.numOfCheck << "\t";
    outs << check.amountOfCheck << "\t";
    outs << check.isCashed;

    return outs;
}
