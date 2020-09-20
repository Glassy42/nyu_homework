#include <iostream>

int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);

int main() {
    using std::cout;
    using std::endl;

    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1(0), res2(0), res3(0), res4(0);

    res1 = minInArray1(arr,10);
    res2 = minInArray2(arr, 0, 9);
    cout << res1 << endl;
    cout << res1 << " " << res2 << endl;

    res3 = minInArray2(arr,2, 5);
    res4 = minInArray1(arr+2, 4);
    cout << res4 << endl;
    cout << res3 << " " << res4 << endl;

    return 0;
}
int minInArray1(int arr[], int arrSize){
    if (arrSize == 1){
        return arr[0];
    } else {
        int num(minInArray1(arr, arrSize-1));
        if (arr[arrSize-1] < num){
            return arr[arrSize-1];
        } else {
            return num;
        }
    }
}

int minInArray2(int arr[], int low, int high){
    if (low == high) {
        return arr[low];
    } else {
        const int div((low+high)/2);
        int num(minInArray2(arr, low, div));
        int num2(minInArray2(arr, div+1, high));
        if (num < num2) {
            return num;
        } else {
            return num2;
        }
    }
}