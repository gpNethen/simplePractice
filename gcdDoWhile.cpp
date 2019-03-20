#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Find the greatest commond divisor between two input integer numbers using a while loop


int main(){

	int num1;                   //Variable to hold the first input integer
	int num2;                   //Variable to hold the second input integer
	int checkFactor=1;          //Variable to track the factor being tested
	int currentGCD;             //Variable to hold the current GCD when found

	cout << "This program takes two integers as input and finds their greatest common divisor (GCD) \n\n";
	cout << "Please input the first of the two integers: \n---->";
	cin >> num1;                //assigns user input to num1
	cout << "Please input the second of the two integers: \n---->";
	cin >> num2;                //assigns user input to num2

	do{
		if( (num1%checkFactor)==0 && (num2%checkFactor)==0)  //If neither input numbers yield a remainder when divided by checkFactor
			currentGCD=checkFactor;                          //checkFactor must be a common divisor
		checkFactor++;                                       //increment checkFactor
	}while( checkFactor <= (min(num1, num2)) );              //While the checkFactor doesn't exceed the lowest input number

	
	cout << "The GCD of " << num1 << " and " << num2 << " is " << currentGCD;

return 0;
}
