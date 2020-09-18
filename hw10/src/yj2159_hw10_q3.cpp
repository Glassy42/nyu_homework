#include <iostream>
#include <vector>

void resize(int*& arr, const int arrSize, int& arrPhysicalSize);
void main1();
void main2();

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    // main1();

    main2();

    return 0;
}

void main1() {
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Please enter a sequence of positive integers,"; 
    cout << "each in a separate line."<< endl;
    cout << "End your input by typing -1." << endl;

    int arrSize(0); 
    int arrPhysicalSize(1); 
    int currNum;
    int* arr = new int[arrPhysicalSize];

    bool seenEndOfInput(false);

    while (seenEndOfInput == false) {
        cin >> currNum;
        if (currNum == -1) {
            seenEndOfInput = true;
        } else {
            if (arrSize == arrPhysicalSize) {
                resize(arr, arrSize, arrPhysicalSize);
            }
            arr[arrSize] = currNum;
            arrSize++;
        }
    }

    int searchNum(0);
    cout << "Please enter a number you want to search. " << endl;
    cin >> searchNum;
    
    int searchArrSize(0);
    int searchArrPhysicalSize(1);
    int* searchArr = new int[searchArrPhysicalSize];

    for (int i(0); i < arrSize; ++i) {
        if (searchNum == arr[i]){
            if (searchArrSize == searchArrPhysicalSize) {
                resize(searchArr, searchArrSize, searchArrPhysicalSize);
            }
            searchArr[searchArrSize] = i + 1;
            searchArrSize++;
        }
    }

    cout << searchNum << " shows in lines ";

    for (int i(0); i < searchArrSize; ++i) {
        if (i != searchArrSize-1) {
            cout << searchArr[i] << ",";
        } else {
            cout << searchArr[i] << "." << endl;
        }
    }

    delete[] searchArr;
    delete[] arr;
}

void resize(int*& arr, const int arrSize, int& arrPhysicalSize) {
    int* newArr = new int[2*arrPhysicalSize];
    for (int i(0); i < arrSize; ++i) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    arrPhysicalSize *= 2;
}

void main2() {
    using std::cout;
    using std::endl;
    using std::cin;
    using std::vector;

    cout << "Please enter a sequence of positive integers,"; 
    cout << "each in a separate line."<< endl;
    cout << "End your input by typing -1." << endl;

    vector<int> linesVec;
    int currNum(0);
    bool seenNegaOne(false);

    while (seenNegaOne == false) {
        cin >> currNum;
        if (currNum == -1) {
            seenNegaOne = true;
        } else {
            linesVec.push_back(currNum);
        }
    }

    int searchNum(0);
    cout << "Please enter a number you want to search. " << endl;
    cin >> searchNum;

    vector<int> searchVec;
    for (int i(0); i < linesVec.size(); ++i) {
        if (searchNum == linesVec[i]) {
            searchVec.push_back(i + 1);
        }
    }
    cout << searchNum << " shows in lines ";
    for (int i(0); i < searchVec.size(); ++i) {
        if (i != searchVec.size()-1) {
            cout << searchVec[i] << ",";
        } else {
            cout << searchVec[i] << "." << endl;
        }
    }

}