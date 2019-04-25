//Author: Nathan Reichert
//Date Created:  25 April, 2019
//Date Last Modified: 25 April, 2019
//This program takes an input positive integer and calculates the necessary digit
//Required to make the entire number a perfect number.  A perfect number
//Means that all of the digits of the number add up to 10

#include <iostream>
#include <iomanip>

using namespace std;

int inputNum;
int workNum;
int currDigit;
int currSum=0;

int main(){
	cout << "A perfect number is a number such that the sum of its digits is 10.\n";
	while(inputNum<=0){
		cout << "Please enter a positive integer to see if it is worthy of being a perfect number:\n----> ";
		cin >> inputNum;
	}
	workNum = inputNum;
	while( workNum % 10 != 0 || workNum / 10 != 0){
		currDigit = workNum%10;
		workNum = workNum/10;
		currSum+=currDigit;
		if( currSum > 10){
			cout << inputNum << " is not worthy of becoming a perfect number.\n\n";
			return 0;
		}
	}
	if( currSum == 10){
		cout << inputNum << " is already a perfect number. Excelsior!\n\n";
		return 0;
	}
	cout << "In order for your number to become a perfect number...\n";
	cout << "One must append the digit " << 10-currSum << endl;
	cout << "The resulting perfect number is: " << inputNum << 10-currSum << endl;
	return 0;
}
