#include <iostream>
using namespace std;

int inputChecker(int a);

int main() {
    int inputInt = 0;
    int length = 0;

    cout << "Please enter an integer larger than 2: ";
    cin >> inputInt;
    inputInt = inputChecker(inputInt);

    if(inputInt % 2 != 0) {
        length = inputInt;
    }
    else length = inputInt + 1;

    //top line
    for (int i = 0; i < length; i++) {
        cout << "X";
    }
    
    cout << "\n"; 
    //middle lines
    for (int i = 1; i < length - 1; i ++) {
        for (int j= 0; j < length; j++) {
            if(j == 0) {
                cout << "X";
            }
            else if (j == length - 1) {
                cout << "X";
                cout << "\n";
            }
            else
                cout << " ";
        }
    }

    //bottom line
    for (int i = 0; i < length; i++) {
    cout << "X";
    }

    cout << "\n";

    return 0;
}

int inputChecker(int a) {
    if(a < 3) {
        cout << "Error. Please enter a new integer: ";
        cin >> a;
        inputChecker(a);
    }
    else 
        return a;
}