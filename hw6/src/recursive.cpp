#include <iostream>
#include <map>

std::map<int, int> fibMemo = std::map<int, int>();

int fib(const int n) {
    if(n == 1 || n == 2) {
        return 1;
    }

    int result;
    auto fibResult = fibMemo.find(n);
    if (fibResult == fibMemo.end()) {
        result = fib(n-1) + fib(n-2);
        fibMemo.insert({n, result});
    }
    else {
        result = fibResult->second;
    }

    return result;
}

int main() {
    // fibMemo = ;
    std::cout << fib(40) << std::endl;
    return 0;
}