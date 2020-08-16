#include <iostream>

using std::cout;
using std::endl;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    using std::cin;

    int n;
    int m;
    char symbol;

    cout << "How many lines: ";
    cin >> n;
    cout << "How many space: ";
    cin >> m;
    cout << "What kind of symbol: ";
    cin >> symbol;

    printShiftedTriangle(n, m, symbol);

    int otherN;
    char otherSymbol;

    cout << "How many sequence of triangles: ";
    cin >> otherN;
    cout << "What kind of symbol: ";
    cin >> otherSymbol;

    printPineTree(otherN, otherSymbol);
    
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