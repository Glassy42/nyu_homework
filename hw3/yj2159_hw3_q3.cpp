#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    double a(0);
    double b(0);
    double c(0);

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;


    if( (a==0) && (b==0) ) {
        if(c==0){
            cout << "This equation has infinite number of solutions" << endl;
        } else {
            cout << "This equation has no solution" << endl;
        }
    } else if (a==0) {
        if( c==0 ) {
            cout << "This equation has a single real solution x = 0" << endl;
        } else {
            cout << "This equation has a single real solution x = " << (0-c)/b << endl;
        }
    } else {
        double firstSolution(0);
        double secondSolution(0);

        double fomula(pow(b, 2) - 4*a*c);

        if(fomula==0) {
            if (b==0) {
                cout << "This equation has a single real solution x = 0" << endl;
            }
            else {
                firstSolution = (-b)/(2*a);
                cout << "This equation has a single real solution x = " << firstSolution << endl;
            }
            
        } else if(fomula>0) {
            fomula = sqrt(fomula);
            const double numerator1(-b + fomula);
            const double numerator2(-b - fomula);
            const double denominator(2*a);

            if (numerator1 == 0) {
                firstSolution = 0;
            } else {
                firstSolution = numerator1 / denominator;
            }

            if (numerator2 == 0) {
                secondSolution = 0;
            } else {
                secondSolution = numerator2 / denominator;
            }

            cout << "This equation has a two real solution x1 = " << firstSolution << ", x2 = " << secondSolution << endl;
        } else {
            cout << "This equation has no real solutions" << endl;
        }
    }

    return 0;
}