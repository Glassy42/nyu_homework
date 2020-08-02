#include <iostream>


int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;
    
    int deciNum(0);

    cout << "Enter decimal number: ";
    cin >> deciNum;

    int max(0);

    for (int i(1); deciNum>=i; i*=2) {
        max = i;
    }
    
    int binary(0);

    for (int i(max); max>=1; max/=2) {
        binary = deciNum/max;
        cout << binary;
        deciNum = deciNum%max;
    }

    cout << endl;

    return 0;
}