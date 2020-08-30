#include <iostream>

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void printArray(int arr[], int arrSize);
int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    int arr1[10] = {9,2,14,12,-3};
    int arr1Size = 5;

    int arr2[10] = {2,3,5,4,7};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);

    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}

void printArray(int arr[], int arrSize) {
    using std::cout;
    using std::endl;

    for (int i(0); i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int arrSize) {
    
    int num(0);
    int j(arrSize-1);
    for (int i(0); i<j; ++i) {
        num = arr[i];
        arr[i] = arr[j];
        arr[j] = num;
        j--;
    }
}

void removeOdd(int arr[], int& arrSize) {

    int evenIndex(0);
    int oddIndex(0);
    int num(0);
    const int size(arrSize);


    while (evenIndex < size && oddIndex < size) {
        
        while ((arr[oddIndex] % 2 == 0) && (oddIndex < size)) {
            oddIndex++;
        }

        while (((arr[evenIndex] % 2 != 0) || (evenIndex < oddIndex)) && (evenIndex < size)) {
            evenIndex++;
        }

        if (evenIndex < size && oddIndex < size) {
            num = arr[evenIndex];
            arr[evenIndex] = arr[oddIndex];
            arr[oddIndex] = num;

        }
    }

    arrSize = oddIndex;
}

void splitParity(int arr[], int arrSize) {

}