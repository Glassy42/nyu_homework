#include <iostream>

int* findMissing (int arr[], int n, int& resArrSize);

int main() {
    int arr[5] = {3, 1, 3, 6, 4};
    int arrSize(5);
    int resArrSize(0);

    int* resArr = findMissing(arr, 6, resArrSize);
    
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

    int* allNum= new int[n+1];

    for (int i(0); i <= n; ++i) {
        allNum[i] = i;
    }

    for (int i(0); i < n; ++i) {
        if (arr[i] != 0) {
            if (allNum[arr[i]] != 0) {
                allNum[arr[i]] = 0;
            }
        } else {
            allNum[arr[i]] = -1;
        }
    }

    int* resArr = new int[resArrSize];
    int j(0);

    if (allNum[0] == 0) {
        resArr[j] = 0;
        j++;
        resArrSize++;
    }

    for (int i(1); i <= n; ++i) {
        if (allNum[i] != 0) {
            resArr[j] = allNum[i];
            j++;
            resArrSize++;
        }
    }

    delete[] allNum;
    
    return resArr;
}