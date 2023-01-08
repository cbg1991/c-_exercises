//Christian Gaillard - Assignment #2

#include <iostream>
using namespace std;

int main()
{

    //define variables
    string colorOne;
    string colorTwo;
    string outputColor;
    char charOne;
    char charTwo;
    int firstDigit = 0;
    int secondDigit = 0;
    int outputDigit = 0;

    //get input for color variables
    cout<<"Please enter the first primary color:";
    getline(cin,colorOne);
    cout<<"Please enter the second primary color:";
    getline(cin,colorTwo);

    //check for errors and print success or error statements
    if (colorOne != "red" && colorOne != "blue" && colorOne != "yellow") {
        cout << "The first color entered is not a primary color\n";
    }
        else 
            if (colorTwo != "red" && colorTwo != "blue" && colorTwo != "yellow") {
            cout << "The second color entered is not a primary color\n";
    }
                else 
                    cout<<"You have mixed "<<colorOne<<" and "<<colorTwo<<".\n";

    //assign integers to each input color in order to run switch statement below
    if (colorOne == "red") {
        firstDigit = 20;
    }
        else
            if (colorOne == "blue") {
                firstDigit = 30;
            }
                else
                    if (colorOne == "yellow") {
                        firstDigit = 40;
                    }
                    else 
                        firstDigit = 100;
    
     if (colorTwo == "red") {
        secondDigit = 1;
    }
        else
            if (colorTwo == "blue") {
                secondDigit = 2;
            }
                else
                    if (colorTwo == "yellow") {
                        secondDigit = 3;
                    }
                    else 
                        secondDigit= 100; 

    //add input digits together to create unqiue output color integer
    outputDigit = firstDigit + secondDigit;

    //switch statement to assign secondary color to output integer and print
    switch (outputDigit) {
        case 21: 
            outputColor = "Red";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 22:
            outputColor = "Purple";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 31:
            outputColor = "Purple";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;        
        case 23:
            outputColor = "Orange";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 41:
            outputColor = "Orange";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 32:
            outputColor = "Blue";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 33:
            outputColor = "Green";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 42:
            outputColor = "Green";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
        case 43:
            outputColor = "Yellow";
            cout<<"The resulting color is "<<outputColor<<"\n";
            break;
    }


return 0;
}