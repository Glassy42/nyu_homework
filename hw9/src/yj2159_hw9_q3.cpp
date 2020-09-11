#include <iostream>

int* getPosNums1 (int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2 (int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3 (int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4 (int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int arr[6] = {3, -1, -3, 0, 6, 4};
    int arrSize(6);

//a)---------------------------------------------------------------------
    int outPosArrSize(0);

    int* returnArray = getPosNums1(arr, arrSize, outPosArrSize);

    cout << "[";
    for(int i(0); i < outPosArrSize; ++i) {
        cout << returnArray[i];
        if (i != outPosArrSize-1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    delete[] returnArray;

//b)---------------------------------------------------------------------

    int outPosArrSize2(0);
    int* outPosArrSizePtr = &outPosArrSize2;

    int* returnArray2 = getPosNums2 (arr, arrSize, outPosArrSizePtr);

    cout << "[";
    for(int i(0); i < *outPosArrSizePtr; ++i) {
        cout << returnArray2[i];
        if (i != *outPosArrSizePtr-1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    delete[] returnArray2;
//c)---------------------------------------------------------------------

    int outPosArrSize3(0);
    int* outPosArr; 
    getPosNums3(arr, arrSize, outPosArr, outPosArrSize3); 

    std::cout << "[";
    for(int i(0); i < outPosArrSize; ++i) {
        std::cout << outPosArr[i];
        if (i != outPosArrSize-1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    delete[] outPosArr;

//d)---------------------------------------------------------------------

    int outPosArrSize4(0);
    int** outPosArrPtr2 = new int*;

    getPosNums4(arr, arrSize, outPosArrPtr2, &outPosArrSize4);

    std::cout << "[";
    for(int i(0); i < outPosArrSize4; ++i) {
        std::cout << (*outPosArrPtr2)[i];
        if (i != outPosArrSize4-1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    delete[] *outPosArrPtr2;
    delete outPosArrPtr2;
    
    return 0;
}

int* getPosNums1 (int* arr, int arrSize, int& outPosArrSize) {

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            outPosArrSize++;
        }
    }

    int* returnArray = new int[outPosArrSize];
    int j(0);

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            returnArray[j] = arr[i];
            ++j;
        }
    }

    return returnArray;
}

int* getPosNums2 (int* arr, int arrSize, int* outPosArrSizePtr) {

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            *outPosArrSizePtr += 1;
        }
    }

    int* returnArray2 = new int[*outPosArrSizePtr];
    int j(0);

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            returnArray2[j] = arr[i];
            ++j;
        }
    }

    return returnArray2;
}

void getPosNums3 (int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    
    for (int i(0); i < arrSize; ++i) {
        if (arr[i] > 0) {
            outPosArrSize++;
        }
    }

    int* posArr = new int[outPosArrSize];
    int j(0);

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            posArr[j] = arr[i];
            ++j;
        }
    }
    outPosArr = posArr; 

}

void getPosNums4 (int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {

    for (int i(0); i < arrSize; ++i) {
        if ((arr[i]) > 0) {
            *outPosArrSizePtr += 1;
        }
    }

    *outPosArrPtr = new int[*outPosArrSizePtr];
    int j(0);

    for (int i(0); i < arrSize; ++i) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[j] = arr[i];
            ++j;
        }
    }
}