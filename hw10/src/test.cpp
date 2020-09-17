#include <iostream>
#include <string>

using namespace std;
int main() {
    std::string sentence = "You can do it";
    const int size(sentence.size());
    const char space = ' ';

    string saveWord[10];
    int i(0), j(0);

    while(i < size) {
        int found(sentence.find(space, i));
        if (found != string::npos) {
            cout << int(found) << endl;
            saveWord[j] = sentence.substr(i, found-i); // position, length
            i = found + 1;
            j++;
        } else {
            saveWord[j] = sentence.substr(i, size-i);
            break;
        }
    } 

    for (int k(0); k < 10; ++k) {
        cout << saveWord[k] << endl;
    }

    return 0;
}