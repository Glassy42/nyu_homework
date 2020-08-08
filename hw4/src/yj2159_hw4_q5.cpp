#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    int num(0);

    cout << "Please enter a positive integer: ";
    cin >> num;

    const int odd(2*num-1);
    int star(odd);
    int space(0);

    for (int lineCount(1); lineCount<=num; lineCount++) {
        for (int spaceCount(0); spaceCount<space; spaceCount+=1) {
            cout << ' ';
        }
        for (int starCount(0); starCount<star; starCount+=1) {
            cout << '*';
        }
        cout << endl;
        star -= 2;
        space += 1;
    }

    
    int otherStar(1);
    int otherSpace((odd/2)+1);

    for (int lineCount(1); lineCount<=num; lineCount++){
        for (int spaceCount(1); spaceCount<otherSpace; spaceCount+=1) {
            cout << ' ';
        }
        for (int starCount(1); starCount<=otherStar; starCount+=1) {
            cout << '*';
        }
        cout << endl;
        otherStar += 2;
        otherSpace -= 1;
    }



    return 0;
}