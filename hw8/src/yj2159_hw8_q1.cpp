#include <iostream>

int minInArray(int arr[], int arrSize);
void minLocation(int arr[], int arrSize, int minNum);

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    int arr[20];
    
    cout << "Please enter 20 integers separated by a space: ";

    for (int i(0); i < 20; ++i) {
        cin >> arr[i];
    }

    int value = minInArray(arr, 20);
    
    minLocation(arr, 20, value);

    return 0;
}

int minInArray(int arr[], int arrSize) {
    using std::cin;

    int minNum(arr[0]);

    for (int i(1); i < arrSize; i++) {
        if ( arr[i] < minNum) {
            minNum = arr[i];
        } 
    }
    
    return minNum;
}

void minLocation(int arr[], int arrSize, int minNum) {
    using std::cout;
    using std::endl;

    cout << "The minimum value is " << minNum << ", and it is located in the following indices: ";

    for (int i(0); i < arrSize; i++) {
        if (arr[i] == minNum) { 
            cout << i << " ";
        }
    }
    cout << endl;
}