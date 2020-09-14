#include <iostream>
#include <string>
#include <vector>

std::string* createWordsArray(std::string sentence, int& outWordsArrSize);
int main() {

    std::string sentence("You can do it");
    int outWordsArrSize(0);
    std::string* words = createWordsArray(sentence, outWordsArrSize);

    std::cout << "[";
    for (int k(0); k < outWordsArrSize; ++k) {
        if (k != outWordsArrSize-1){
            std::cout << words[k] << ",";
        } else {
            std::cout << words[k];
        }
        
    }
    std::cout << "]" << std::endl;
    
    return 0;
}

std::string* createWordsArray(std::string sentence, int& outWordsArrSize) {

    const int size(sentence.size());
    const int lastIndex(size-1);

    for (int i(0); i < size; ++i) {
        if (sentence[i] == ' ' || i == lastIndex) {
            outWordsArrSize++;
        }
    }

    std::string* wordArr = new std::string[outWordsArrSize];
    
    const char space = ' ';

    int i(0), j(0);

    while(i < size) {
        int found(sentence.find(space, i));
        if (found != std::string::npos) {
            wordArr[j] = sentence.substr(i, found-i); // position, length
            i = found + 1;
            j++;
        } else {
            wordArr[j] = sentence.substr(i, size-i);
            break;
        }
    }

    return wordArr;
}