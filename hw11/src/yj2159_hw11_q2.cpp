#include <iostream>
#include <cmath>
#include <string>

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main() {
    
    int arr[4] = {2, -1, 3, 10};
    int result(0);
    result = sumOfSquares(arr, 4);
    std::cout << result << std::endl;

    bool end;
    end = isSorted(arr, 4);
    if (end) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    

    return 0;
}

int sumOfSquares(int arr[], int arrSize){
    int sum(0);
    if (arrSize == 1) {
        return pow(arr[0], 2);
    } else {
        sum = sumOfSquares(arr, arrSize-1);
        sum += pow(arr[arrSize-1], 2);
        return sum;
    }
}

bool isSorted(int arr[], int arrSize){
    bool result(true);
    if (arrSize == 1) {
        result = true;
    } else {
        if (arr[arrSize-2] > arr[arrSize-1]){
            result = false;
        } else {
            result = isSorted(arr, arrSize-1);
        }
    }
    return result; 
}