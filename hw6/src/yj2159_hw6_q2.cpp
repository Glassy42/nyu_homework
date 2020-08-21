#include <iostream>

using std::cout;
using std::endl;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    using std::cin;

    int num;
    char symbol;

    cout << "How many sequence of triangles: ";
    cin >> num;
    cout << "What kind of symbol: ";
    cin >> symbol;

    printPineTree(num, symbol);
    
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {

    int space(m+n);
    int num(1);

    for(int lineCount(0); lineCount<n; lineCount++) {
        for (int spaceCount(1); spaceCount<space; spaceCount++) {
            cout << " ";
        }
        for (int sign(0); sign<num; sign++) {
            cout << symbol;
        }
        cout << endl;
        space--;
        num += 2;
    }
}

void printPineTree(int n, char symbol) {
    
    for(int counter(1); counter <= n; ++counter) {
        printShiftedTriangle(counter+1, n-counter, symbol);
    }
}