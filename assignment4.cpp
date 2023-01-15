//Christian Gaillard - Assignment 4

#include <iostream>
using namespace std;

double recArea(double a, double b);
double squareArea(double a);
double triArea(double a, double b);
double cirArea(double a);
double negCheck(double a);

int main()
{
    char input;
    do
    {
        cout << "------------------------------\n";
        cout << "Welcome to a geometry calculator!\n";
        cout << "Insert 'R' for Rectangle.\n";
        cout << "Insert 'S' for Square.\n";
        cout << "Insert 'T' for Triangle.\n";
        cout << "Insert 'C' for Circle.\n";
        cout << "\nInsert 'Y' to continue.\n";
        cout << "Insert 'N' to finish the program.\n";
        cout << "------------------------------\n";
        cout << "Please select your choice\n";
        cout << "Input: ";
        cin >> input;

        const double PI = 3.14;
        double value1 = 0;
        double value2 = 0;
        double area = 0;
        switch (input)
        {
        case 'r': // accept a lower case
        case 'R':
            cout << "RECTANGLE - Solve for area\n";
            cout << "Length: ";
            cin >> value1;
            value1 = negCheck(value1);

            cout << "Width: ";
            cin >> value2;
            value2 = negCheck(value2);
            cout << "Area = " << recArea(value1, value2) << endl;
            break;
        case 's':
        case 'S':
            cout << "SQUARE - Solve for area\n";
            cout << "Side: ";
            cin >> value1;
            value1 = negCheck(value1);
            cout << "Area = " << squareArea(value1) << endl;
            break;
        case 't':
        case 'T':
            cout << "TRIANGLE - Solve for area\n";
            cout << "Base: ";
            cin >> value1;
            value1 = negCheck(value1);
            cout << "Height: ";
            cin >> value2;
            value2 = negCheck(value2);

            cout << "Area = " << triArea(value1, value2) << endl;
            break;
        case 'c':
        case 'C':
            cout << "CIRCLE - Solve for area\n";
            cout << "Radius: ";
            cin >> value1;
            value1 = negCheck(value1);

            cout << "Area = " << cirArea(value1) << endl;
            break;
        case 'n':
        case 'N':
        case 'y':
        case 'Y': // n,N,y,Y are valid input
            break;
        default:
            cout << "INVALID INPUT - Try again!\n";
        }

    } while ((input != 'N') && (input != 'n'));

    cout << "\n*****************************************\n";
    cout << " *  KEEP CALM AND CODE ON AND BE SAFE!    *";
    cout << "\n*****************************************\n";

    return 0;
}

double recArea(double sideOne, double sideTwo)
{
    double area;
    area = sideOne * sideTwo;
    return area;
}

double squareArea(double side)
{
    double area;
    area = side * side;
    return area;
}

double triArea(double base, double height)
{
    double area;
    area = (base * height) / 2;
    return area;
}

double cirArea(double radius)
{
    double area;
    double const PI = 3.14;
    area = PI * radius * radius;
    return area;
};

double negCheck(double value)
{
    if (value <= 0)
    {
        cout << "Try again!\nA positive number please: ";
        cin >> value;
        negCheck(value);
    }
    else 
    return value;
}