#include "Money.h"

Money operator+(const Money& amount1, const Money& amount2) {
    int cents(amount1.all_cents % 100 + amount2.all_cents % 100);
    long dollars(cents / 100);

    cents = cents % 100;
    dollars += amount1.all_cents / 100 + amount2.all_cents / 100;
    
    return Money(dollars, cents);
}

Money operator-(const Money& amount1, const Money& amount2) {
    long result(amount1.all_cents - amount2.all_cents);

    long dollars(result / 100);
    int cents(result % 100);

    return Money(dollars, cents);
}

Money operator-(const Money& amount) {
    long negAmount = -amount.all_cents;

    long dollars(negAmount / 100);
    int cents(negAmount % 100);

    return Money(dollars, cents);
}

bool operator==(const Money& amount1, const Money& amount2) {
    return amount1.all_cents == amount2.all_cents;
}

bool operator<(const Money& amount1, const Money& amount2) {
    return amount1.all_cents < amount2.all_cents;
}

bool operator>(const Money& amount1, const Money& amount2) {
    return amount1.all_cents > amount2.all_cents;
}

Money::Money() {
    all_cents = 0;
}

Money::Money(long dollars) {
    all_cents = dollars * 100;
}

Money::Money(double amount) {
    long dollars = (long)amount * 100;
    long cents = (long)(amount * 100) % 100;
    all_cents = dollars + cents;
}

Money::Money(long dollars, int cents) {
    all_cents = dollars * 100 + cents;
}

const double Money::get_value() const {
    double dollars(all_cents / 100);
    double cents((double)(all_cents % 100) / 100.0);
    return dollars + cents;
}

std::istream& operator >>(std::istream& ins, Money& amount) {
    double moneyAmount(0.0);
    ins >> moneyAmount;
    long dollar = moneyAmount * 100;
    long cents = (long)(moneyAmount * 100) % 100;

    amount.all_cents = dollar + cents;
    return ins;
}

std::ostream& operator <<(std::ostream& outs, const Money& amount) {
    outs << amount.get_value();
    return outs;
}