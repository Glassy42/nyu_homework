#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    double weightPounds(0);
    double heightInches(0);

    cout << "Please enter weight(in pounds): ";
    cin >> weightPounds;
    cout << "Please enter height(in inches): ";
    cin >> heightInches;

    const double weightKilos(weightPounds*0.453592);
    const double heightMeters(heightInches*0.0254);

    const double formula(weightKilos/(heightMeters*heightMeters));

    if (formula<18.5) {
        cout << "The weight status is: Underweight" << endl;
    } else if (formula<25) {
        cout << "The weight status is: Normal" << endl; 
    } else if (formula<30) {
        cout << "The weight status is: Overweight" << endl;
    } else {
        cout << "The weight status is: Obese" << endl;
    }

    return 0;
}