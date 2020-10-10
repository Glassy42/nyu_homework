#ifndef __CHECK_H__
#define __CHECK_H__
#include "Money.h"

class Check{
    public:
        Check(int numOfCheck, double amount, bool isCashed);
        int getNumOfCheck();
        const Money& getAmount();
        bool getIsCashed();
        void setIsCashed(bool);
        void setAmount(Money);
        void setNumOfCheck(int);
        friend std::istream& operator >>(std::istream &ins, Check& check);
        friend std::ostream& operator <<(std::ostream &outs, Check& check);
    private:
        int numOfCheck;
        Money amountOfCheck;
        bool isCashed;
    
};

#endif