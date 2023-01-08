//Christian Gaillard - Assignment #2

#include <iostream>
using namespace std;

int main()
{

//define variables
string colorOne;
string colorTwo;

//get input for color variables
cout<<"Please enter the first primary color:";
getline(cin,colorOne);
cout<<"Please enter the second primary color:";
getline(cin,colorTwo);

if (colorOne != "red" && colorOne != "blue" && colorOne != "yellow") {
    cout << "The first color entered is not a primary color\n";
}
    else 
        if (colorTwo != "red" && colorTwo != "blue" && colorTwo != "yellow") {
        cout << "The second color entered is not a primary color\n";
}
    else 
        cout<<"You have entered "<<colorOne<<" and "<<colorTwo<<".\n";

return 0;
}