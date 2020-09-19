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
    cout << res1 << " " << res2 << endl;

    res3 = minInArray2(arr,2, 5);
    res4 = minInArray1(arr+2, 4);
    cout << res3 << " " << res4 << endl;

    return 0;
}
int minInArray1(int arr[], int arrSize){
    if ()
}

int minInArray2(int arr[], int low, int high){

}