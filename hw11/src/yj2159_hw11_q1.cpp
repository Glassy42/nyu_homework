#include <iostream>
#include <string>

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main(){
    std::cout << "printTriangle" << std::endl;
    printTriangle(4);

    std::cout << std::endl;

    std::cout << "printPpositeTrinalgles" << std::endl;
    printOpositeTriangles(4);

    std::cout << std::endl;
    std::cout << "printRuler" << std::endl;
    printRuler(5);

    return 0;
}
void printTriangle(int n) {
    if (n == 1) {
        std::cout << '*' << std::endl;
    } else {
        printTriangle(n-1);
        std::cout << std::string(n, '*') << std::endl;
    }
}
void printOpositeTriangles(int n) {
    if (n == 1) {
        std::cout << '*' << std::endl;
        std::cout << '*' << std::endl;
    } else {
        std::cout << std::string(n, '*') << std::endl;
        printOpositeTriangles(n-1);
        std::cout << std::string(n, '*') << std::endl;
    }
}
void printRuler(int n) {
    if (n == 1) {
        std::cout << '-' << std::endl;
    } else {
        printRuler(n-1);
        std::cout << std::string(n, '-') << std::endl;
        printRuler(n-1);
    }
}