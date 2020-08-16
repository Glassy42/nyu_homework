#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    srand(time(0));

    int x((rand()%100) + 1);
    int userGuess(0);

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    cout << "Range: [1,100], Number of guesses left: 5" << endl;
    cout << "Your guess: ";
    cin >> userGuess;

    int rangeMin(1);
    int rangeMax(100);
    int guessNumCount(5);

    while (guessNumCount>1) {
        if (userGuess==x) {
            cout << "Congrats! You guessed my number in " << guessNumCount << " guesses." << endl;
            break;
        } else {
            if (userGuess<x){
                cout << "Wrong! My number is bigger!" << endl;
                cout << endl;
                rangeMin = userGuess+1;
                guessNumCount -= 1;

                cout << "Range: [" << rangeMin << "," << rangeMax << "]";
                cout << ", Number of guesses left: " << guessNumCount << endl;
                cout << "Your guess: ";
                cin >> userGuess;
                
            } else {
                cout << "Wrong! My number is smaller!" << endl;
                cout << endl;
                rangeMax = userGuess-1;
                guessNumCount -=1;

                cout << "Range: [" << rangeMin << "," << rangeMax << "]";
                cout << ", Number of guesses left: " << guessNumCount << endl;
                cout << "Your guess: ";
                cin >> userGuess;
                
            }
            
        }
    }

    if (guessNumCount==1){
        cout << "Out of guesses! My number is " << x << endl;
    }
    


    return 0;
}