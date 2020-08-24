#include <iostream>
#include <cmath>

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main() {
    using std::cout;
    using std::endl;

    int outCountDivs(0), outSumDivs(0);
    analyzeDividors(12, outCountDivs, outSumDivs);

    cout << "outCountDivs: " << outCountDivs << " outSumDivs: " << outSumDivs << endl;

    bool value = isPerfect(6);
    cout << value << endl;

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
    using std::cout;
    using std::endl;

    const int squareRoot(sqrt(num));

    for (int numCheck(1); numCheck<squareRoot; ++numCheck) {
        if (num%numCheck == 0) {
            outCountDivs++;
            outSumDivs += numCheck;
        }
    }

    if ((squareRoot*squareRoot != num)&&(num%squareRoot == 0)) {
        outCountDivs++;
        outSumDivs += squareRoot;
    }

    for (int numCheck(squareRoot); numCheck>=1; --numCheck) {
        if ((num%numCheck == 0)&&(num != num/numCheck)) {
            outCountDivs++;
            outSumDivs += num/numCheck;
        }
    }
}

bool isPerfect(int num) {
    bool perfectNum;
    
    int outCountDivs(0), outSumDivs(0);
    analyzeDividors(num, outCountDivs, outSumDivs);

    if (num ==outSumDivs) {
        perfectNum = true;
    } else {
        perfectNum = false;
    }

    return perfectNum;
}