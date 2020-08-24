#include <iostream>
#include <cmath>

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    int M(0);

    cout << "Please enter the integer 2>=";
    cin >> M;

    for (int i(2); i<=M; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }

    for (int i(2); i<=M; i++) {
        int outCountDivs(0), outSumDivs(0), otherOutSumDivs(0);
        analyzeDividors(i, outCountDivs, outSumDivs);

        if ((i != outSumDivs)&&(outSumDivs>i)) {
            int otherOutSumDivs(0);
            analyzeDividors(outSumDivs, outCountDivs, otherOutSumDivs);
            if (i == otherOutSumDivs) {
                cout << i << " and " << outSumDivs << endl;
            }
        }
    }
    

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
    int outCountDivs(0), outSumDivs(0);
    analyzeDividors(num, outCountDivs, outSumDivs);

    return num == outSumDivs;
}