#include <iostream>

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main(){
    // std::cout << "printTriangle" << std::endl;
    // printTriangle(4);

    // std::cout << std::endl;

    // std::cout << "printPpositeTrinalgles" << std::endl;
    // printOpositeTriangles(4);

    // std::cout << std::endl;
    std::cout << "printRuler" << std::endl;
    printRuler(3);

    return 0;
}
void printTriangle(int n) {
    if (n == 1) {
        std::cout << '*' << std::endl;
    } else {
        printTriangle(n-1);
        for (int i(0); i < n; ++i) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
void printOpositeTriangles(int n) {
    if (n == 1) {
        std::cout << '*' << std::endl;
        std::cout << '*' << std::endl;
    } else {
        for(int i(0); i < n; ++i){
            std::cout << '*';
        }
        std::cout << std::endl;
        printOpositeTriangles(n-1);
        for (int i(0); i < n; ++i) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
void printRuler(int n) {
    if (n == 1) {
        
    } else {
        printRuler(n-1);
        
    }
}