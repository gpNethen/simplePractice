//Author: Nathan Reichert
//Date Created:  23 April, 2019
//Date Last Modified: 23 April, 2019
//This program takes an array of integer values, and calculates the 
//Maximum and minimum product for any three of the array's integer values

#include <iostream>   //Needed for cin and cout
#include <iomanip>    //For future formatting of array content output

using namespace std;

int main(){
	
	int listSize=8;
	int intList[listSize] = {-2, 10, -25, 15, -30, 16, 13, -1};
	int currentProduct=0;
	int highestProduct=0;
	int lowestProduct=0;
	int i, j, k;
	
	for (i=0; i<(listSize-2); i++){
		for (j=i+1; j<(listSize-1); j++){
			for (k=j+1; k<listSize; k++){
				currentProduct = intList[i]*intList[j]*intList[k];
				if (currentProduct > highestProduct)
					highestProduct = currentProduct;
				if (currentProduct < lowestProduct)
					lowestProduct = currentProduct;
				cout << setw(7) << " i   " << " j   " << " k   " << " product " << endl;
				cout << setw(5) << intList[i] << setw(5) << intList[j] << setw(5) << intList[k] << setw(3) << " " << currentProduct << endl << endl;
			}
		}
	}
	cout << "Highest possible product: " << highestProduct << endl;
	cout << "Lowest possible product: " << lowestProduct << endl;
	
}
