#include <iostream>
using namespace std;

int factorial(int n);
void printFactorial(int n);

int main()
{
    int userInput;
    cout << "Please input a positive number: ";
    cin >> userInput;
    while (userInput < 1)
    {
        cout << "Please try again!\n";
        cout << "Please input a positive number: ";
        cin >> userInput;
    }

    int factorialValue = factorial(userInput);
    printFactorial(userInput);
    cout << "= " << factorialValue << endl;
    return 0;
}

int factorial(int n)
{
    int result = 1;
    for (int i = n; i > 1; i--)
    {
        result *= i;
    }
    return result;
}

void printFactorial(int n)
{
    cout << n << "! = ";
    for (int i = n; i > 1; i--)
    {
        cout << i << " * ";
    }
    cout << "1 ";
}
