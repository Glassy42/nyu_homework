#include <iostream>

void oddsKeepEvensFlip(int arr[], int arrSize);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int arr[6] = {5,2,11,7,6,4};
    int arrSize(6);

    oddsKeepEvensFlip(arr, arrSize);
    
    cout << "[";
    for (int i(0); i < arrSize; i++) {
        cout << arr[i];
        if (i != arrSize-1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
void oddsKeepEvensFlip(int arr[], int arrSize) {

    int oddNum(0);
    int evenNum(0);

    for (int i(0); i < arrSize; ++i) {
        if (arr[i]%2 == 0) {
            evenNum++;
        } else {
            oddNum++;
        }
    }

    int* oddArray = new int[oddNum];
    int* evenArray = new int[evenNum];
    int j(0);
    int k(0);

    for (int i(0); i < arrSize; ++i) {
        if (arr[i]%2 != 0) {
            oddArray[j] = arr[i];
            j++;
        } else {
            evenArray[k] = arr[i];
            k++;
        }
    }

    for (int i(0); i < oddNum; ++i) {
        arr[i] = oddArray[i];
    }

    int l(evenNum-1);
    for (int i(oddNum); i < arrSize; ++i) {
        arr[i] = evenArray[l];
        l--;
    }

    delete [] oddArray;
    delete [] evenArray;
}