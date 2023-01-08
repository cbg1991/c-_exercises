#include <iostream>
using namespace std;

int main()
{
string colorOne;
string colorTwo;

cout<<"Please enter the first primary color:";
getline(cin,colorOne);
cout<<"Please enter the second primary color:";
getline(cin,colorTwo);

cout<<"You have entered "<<colorOne<<" and "<<colorTwo<<".";

}