#include <iostream>
#include <string>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    string name;
    int graduationYear(0);
    int currentYear(0);

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;
    cout << "Please enter current year: ";
    cin >> currentYear;

    if(graduationYear<=currentYear){
        cout << name << ", you graduated" << endl;
    }else if(graduationYear-currentYear==1){
        cout << name << ", you are a Senior" << endl;
    }else if(graduationYear-currentYear==2){
        cout << name << ", you are a Junior" << endl;
    }else if(graduationYear-currentYear==3){
        cout << name << ", you are a Sophomore" << endl;
    }else if(graduationYear-currentYear==4){
        cout << name << ", you are a Freshman" << endl;
    }else{
        cout << name << ", you are not in college yet" << endl;
    }

    return 0;
}