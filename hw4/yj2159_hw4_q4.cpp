#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    int length(0);
    int num(0);
    int sequence(1);

    cout << "a) Frist read the length of the sequence" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> length;
    cout << "Please enter your sequence: " << endl;

    for (int i(1); i<=length; i++) {
        cin >> num;
        sequence *= num;
    } 

    double n(0);
    for(double i(0); pow(i,length)<=sequence; i++){
        n = i;
    }
  
    cout << std::setprecision(16);
    cout << "The geometric mean is: " << n << endl;

    return 0;
}