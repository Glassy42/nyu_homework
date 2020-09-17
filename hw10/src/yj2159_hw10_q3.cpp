#include <iostream>
#include <vector>

void main1();
void main2();

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    main1();
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

    int* arr = new int[1];
    int arrSize(0); 
    int arrPhysicalSize(1); 
    int currNum;
    
    bool seenEndOfInput(false);

    while (seenEndOfInput == false) {
        cin >> currNum;
        if (currNum == -1) {
            seenEndOfInput = true;
        } else {
            if (arrSize == arrPhysicalSize) {
                int* newArr = new int[2*arrPhysicalSize];
                for (int i(0); i < arrSize; ++i) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
                arrPhysicalSize *= 2;
            }
            arr[arrSize] = currNum;
            arrSize++;
        }
    }

    int searchNum(0);
    cout << "Please enter a number you want to search. " << endl;
    cin >> searchNum;
    
    cout << searchNum << " shows in lines ";
    for (int i(0); i < arrSize; ++i) {
        if (searchNum == arr[i]) {
            cout << i + 1 << ",";
        }
    }
    
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

    cout << searchNum << " shows in lines ";
    for (int i(0); i < linesVec.size(); ++i) {
        if (searchNum == linesVec[i]) {
            cout << i + 1 << ",";
        }
    }
}