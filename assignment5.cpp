
//Christian Gaillard - Assignment 5
#include <iostream>
using namespace std;

//prototype functions
int averageSales(int array10[], const int SIZE);
void aboveAverage(int salesArray[], string colorArray[], const int SIZE, int average);

int main() 
{
    /* initalize and populate color array, initalize sales array, loop through color array while entering numbers into sales array */
	const int SIZE = 6;
	int monthlyAverage = 0;
	string colors[SIZE] = {"purple", "blue", "green", "yellow", "orange", "red"};
	int sales[SIZE];
	for(int i = 0; i < SIZE; i++) {
		cout << "Enter " << colors[i] << " monthly sales: ";
		cin >> sales[i];
	}

    //call function to calc average and print, then calc colors above average
	monthlyAverage = averageSales(sales, SIZE);
	cout << "The average monthly sales is: " << monthlyAverage << "\n";

	aboveAverage(sales, colors, SIZE, monthlyAverage);

return 0;
}

//loop through array adding value to sum, then divide sum by number of values
int averageSales(int array[], const int SIZE) {
	int average;
	int sum;
	for (int i = 0; i < SIZE; i++) {
		sum = array[i] + sum;
	}
	average = sum / SIZE;
	return average;
}

//loop through sales array, if value is greater or equal to average, print same index from color array
void aboveAverage(int salesArray[], string colorArray[], const int SIZE, int average) {
	cout << "Top selling: \n";
	for(int i = 0; i < SIZE; i++) {
		if(salesArray[i] >= average) {
			cout << colorArray[i] << ": (" << salesArray[i] << ")\n";
		}
	}
}