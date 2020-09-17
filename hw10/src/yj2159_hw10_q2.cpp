#include <iostream>

int* findMissing (int arr[], int n, int& resArrSize);

int main() {
    int arr[1] = {1}; 
    int arrSize(1);
    int resArrSize;

    int* resArr = findMissing(arr, 1, resArrSize);
    
    std::cout << "[";
    for (int i(0); i < resArrSize; ++i) {
        if (i != resArrSize-1){
            std::cout << resArr[i] << ",";
        } else {
            std::cout << resArr[i];
        }
    }
    std::cout << "]" << std::endl;

    delete[] resArr;

    return 0;
}

int* findMissing (int arr[], int n, int& resArrSize) {

    bool* allNum= new bool[n+1];
    resArrSize = n + 1;

    for (int i(0); i <= n; ++i) {
        allNum[i] = false;
    }

    for (int i(0); i < n; ++i) {
        int currNumber(arr[i]);
        if (allNum[currNumber] == false) {
            allNum[currNumber] = true;
            resArrSize--;
        }
    }

    int* resArr = new int[resArrSize];
    int j(0);
    for (int i(0); i <= n; ++i) {
        if (allNum[i] == false) {
            resArr[j] = i;
            j++;
        }
    }
    
    delete[] allNum;
    
    return resArr;
}