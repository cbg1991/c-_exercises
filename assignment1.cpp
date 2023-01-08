#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    int firstInput = 0;
    int secondInput = 0;

    //prompt a user for inputs
    cout<<"Please enter first positive number:";
    cin>>firstInput;
    cout<<"Please enter second positive number:";
    cin>>secondInput;

    //perform computation
    int sum = firstInput + secondInput;
    int sub = firstInput / secondInput;

    //output to screen
    cout << firstInput << " + " << secondInput << " = " << sum << "\n";
    cout << firstInput << " - " << secondInput << " = " << sub<<  "\n";

   //return statement
   return 0;
}