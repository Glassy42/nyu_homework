#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    int num(0);
    int a(2);
    int b(2);

    cout << "Please enter a positive integer: ";
    cin >> num;

    cout << "section a" << endl;
    
    int numCount(1);
    while(numCount<=num){
        cout << a << endl;
        a +=2;
        numCount++;
    }

    cout << "section b" << endl;
    for(int numCount(1); numCount<=num; numCount++){
        cout << b << endl;
        b +=2;
    }
    return 0;
}