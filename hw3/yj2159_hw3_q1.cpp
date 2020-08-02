#include <iostream>
#include <iomanip>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    double firstItemPrice(0);
    double secondItemPrice(0);
    char clubCard;
    double taxRate(0);

    cout << "Enter price of first item: ";
    cin >> firstItemPrice;
    cout << "Enter price of second item: ";
    cin >> secondItemPrice;
    cout << "Does customer have a club card?(Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    const double basePrice(firstItemPrice+secondItemPrice);

    double halfPrice(0);
    double beforeTax(0);

    if(firstItemPrice>=secondItemPrice){
        halfPrice = secondItemPrice/2.0;
        beforeTax = halfPrice+firstItemPrice;
    } else {
        halfPrice = firstItemPrice/2.0;
        beforeTax = halfPrice+secondItemPrice;
    }


    double afterDiscount(beforeTax);

    if ((clubCard=='y')||(clubCard=='Y')){
        afterDiscount *= 0.9;
    }

    const double tax((afterDiscount * taxRate) / 100.0);
    const double totalPrice(afterDiscount+tax);

    cout << std::setprecision(16);
    cout << "Base price: " << basePrice << endl;
    cout << "Price after discounts: " << afterDiscount << endl;
    cout << "Total price: " << totalPrice << endl;


    return 0;
}