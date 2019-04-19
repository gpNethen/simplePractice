//Author: Nathan Reichert
//Date Last Modified: Friday April 19, 2019
//This program initializes an n x m matrix based on user input, displays it in a readable
//Format, and then proceeds to print all of the values of the matrix in a clockwise
//Spiral pattern.


#include <iostream> //Needed for input and output
#include <iomanip>  //Needed to format the output of the matrix.  Helps make it look pretty.

using namespace std;

int main(){
	
	int nMax=0; //Max value for the number of columns in the n x m matrix
	int mMax=0; //Max value for the number of rows in the n x m matrix

	//Output that guides the user through the program
	cout << "This program creates an N x M matrix, and prints out each value in the matrix in a clockwise spiral pattern.\n";
	while( nMax < 1){     //If the user has not entered an integer greater than zero, this will loop
		cout << "Please input the N number of columns (integer greater than zero): \n-----> ";
		cin >> nMax;      //Sets new value to the max number of columns
	}
	while( mMax <1){      //If the user has not entered an integer greater than zero, this will loop
		cout << "Please input the M number of rows (integer greater than zero): \n-----> ";
		cin >> mMax;      //Sets new value to the max number of rows
	}
	
	int enByEmMatrix[nMax][mMax];   //Initializes n x m matrix at the user specified dimensions
	int counter=0;                  //Initializes a counter which is used to place values in the matrix
	
	for(int m=0; m<mMax; m++){                         //Nested loops to input values into the nxm matrix
		for(int n=0; n<nMax; n++)
			enByEmMatrix[n][m]=++counter;              //Each entry is simply the pre-incremented counter value
	}
	
	for(int m=0; m<mMax; m++){                         //Nested loops to display the matrix in order to verify its contents
		for(int n=0; n<nMax; n++)
			cout  << setw(5) << enByEmMatrix[n][m];    //Each entry is output in an easily-readable fashion
		cout << endl << endl;
	}
	
	int nLow=0;                                        //Variable to keep track of the smallest column
	int nHigh=nMax-1;                                  //Variable to keep track of the highest column
	int mLow=0;                                        //Variable to keep track of the smallest row
	int mHigh=mMax-1;                                  //Variable to keep track of the highest row
	
	while ( counter > 0 ){                             //While all of the numbers have not yet been output:
		for(int n=nLow; n<=nHigh; n++){                
			cout << enByEmMatrix[n][mLow] << endl;     //Displays the values from left to right of the minimum row
			counter--;                                 //Decrements the counter for each value printed
		}
		mLow++;                                        //Once the lowest row is printed, it is no longer needed, and is incremented
		for(int m=mLow; m<=mHigh; m++){
			cout << enByEmMatrix[nHigh][m] << endl;    //Displays the values from top to bottom of the maximum column
			counter--;                                 //Decrements the counter for each value printed
		}
		nHigh--;                                       //Once the highest column is printed, it is no longer needed, and is decremented
		for(int n=nHigh; n>=nLow; n--){
			cout << enByEmMatrix[n][mHigh] << endl;    //Displays the values from right to left of the maximum row
			counter--;								   //Decrements the counter for each value printed
		}
		mHigh--;                                       //Once the maximum row is printed, it is no longer needed, and is decremented
		for(int m=mHigh; m>=mLow; m--){
			cout << enByEmMatrix[nLow][m] << endl;     //Displays the values from bottom to top of the minimum column
			counter--;                                 //Decrements the counter for each value printed
		}
		nLow++;                                        //Once the minimum row is printed, it is no longer needed, and is incremented
	}
	
	
return 0;
}
