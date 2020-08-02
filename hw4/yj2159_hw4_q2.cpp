#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    int decimalNum(0);

    cout << "Enter decimal number: ";
    cin >> decimalNum;

    int divNum(0);

    if (decimalNum/1000 !=0) {
        divNum = decimalNum/1000;
        for (int i(1); i<=divNum; i++){
            cout << 'M';
        }
        decimalNum = decimalNum%1000;
        
    } 
    
    if (decimalNum/500 != 0) {
        divNum = decimalNum/500;
        for (int i(1); i<=divNum; i++){
            cout << 'D';
        }
        decimalNum = decimalNum%500;
    }

    if (decimalNum/100 != 0) {
        divNum = decimalNum/100;
        for (int i(1); i<=divNum; i++){
            cout << 'C';
        }
        decimalNum = decimalNum%100;
    }

    if (decimalNum/50 != 0) {
        divNum = decimalNum/50;
        for (int i(1); i<=divNum; i++){
            cout << 'L';
        }
        decimalNum = decimalNum%50;
    }

    if (decimalNum/10 != 0) {
        divNum = decimalNum/10;
        for (int i(1); i<=divNum; i++){
            cout << 'X';
        }
        decimalNum = decimalNum%10;
    }

    if (decimalNum/5 != 0) {
        divNum = decimalNum/5;
        for (int i(1); i<=divNum; i++){
            cout << 'V';
        }
        decimalNum = decimalNum%5;
    }

    if (decimalNum/1 != 0) {
        divNum = decimalNum/1;
        for (int i(1); i<=divNum; i++){
            cout << 'I';
        }
        decimalNum = decimalNum%1;
    }

    cout << endl;
    return 0;
}