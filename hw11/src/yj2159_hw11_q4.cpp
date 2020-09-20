#include <iostream>

int jumpIt(int arr[], int arrSize, int index);
int main() {

    int arr[6] = {0, 3, 80, 6, 57, 10};
    int arrSize(6);
    int result(0);
    int index(0);
    result = jumpIt(arr, arrSize, index);
    
    std::cout << result << std::endl;

    return 0;
}

int jumpIt(int arr[], int arrSize, int index){
    if ((index == arrSize-2) || (index == arrSize-3)){
        return arr[arrSize-1];
    } else {
        int cost(jumpIt(arr, arrSize, index+1) + arr[index+1]);
        int cost2(jumpIt(arr, arrSize, index+2) + arr[index+2]);
        if (cost < cost2){
            return cost;
        } else{
            return cost2;
        }
    }
}