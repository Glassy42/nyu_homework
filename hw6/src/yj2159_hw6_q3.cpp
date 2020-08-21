#include <iostream>

double eApprox(int n);

int main() {
    using std::cout;
    using std::endl;

    cout.precision(30);

    for (int n(1); n<=15; n++) {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }

    return 0;
}

double eApprox(int n) {
    const double firstNum(1);
    const double secondNum(1);

    double e(0);

    if (n == 1) {
        return firstNum+secondNum;
    } else {
        double divNum(0);
        int fact(1);
        for (int count(1); count<n; count++){
            fact *= count;
            divNum = 1.0/fact;
            e += divNum;
        }
        
        return e+firstNum;
    }

}