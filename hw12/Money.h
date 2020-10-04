#ifndef __MONEY_H__
#define __MONEY_H__
#include <iostream>

class Money{
    public:
    friend Money operator +(const Money& amount1, const Money& amount2);

    friend Money operator -(const Money& amount1, const Money& amount2);

    friend Money operator -(const Money& amount); //unary minus

    friend bool operator ==(const Money& amount1, const Money& amount2); 

    friend bool operator <(const Money& amount1, const Money& amount2);

    friend bool operator >(const Money& amount1, const Money& amount2);

    Money(long dollars, int cents);
    Money(long dollars);
    Money(double amount);
    Money();

    const double get_value();

    friend std::istream& operator >>(std::istream& ins, Money& amount); // ins = input stream

    friend std::ostream& operator <<(std::ostream& outs, const Money& amount);

    private:
        long all_cents;
};

#endif