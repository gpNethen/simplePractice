#include <iostream>
using namespace std;

int main(){
	int k;
	cout << "Enter an integer to see if it is the sum of 2 numbers from my list:\n";
	cin >> k;
	int list[5];                         //initialize list of 5 integers
	for(int i=0; i <5; i++){             //for loop to fill list of integers
		list[i]=3*i;                     //item in array is 3*index
		cout << list[i] << endl;         //cout contents of each index of array to verify contents
	}
	
	for(int i=0; i<4; i++){
		for(int j=1; j<5; j++){
			if( !(k-list[i]-list[j]) ){
				cout << list[i] << " + " << list[j] << " = " << k << endl;
				return true;
			}
		}
	}
	cout << "Number not found on the list\n";
	return false;
}
