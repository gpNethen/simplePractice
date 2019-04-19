#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int nMax=0;
	int mMax=0;
	
	cout << "This program creates an N x M matrix, and prints out each value in the matrix in a clockwise spiral pattern.\n";
	while( nMax < 1){
		cout << "Please input the N number of columns (integer greater than zero): \n-----> ";
		cin >> nMax;
	}
	while( mMax <1){
		cout << "Please input the M number of rows (integer greater than zero): \n-----> ";
		cin >> mMax;
	}
	
	int enByEmMatrix[nMax][mMax];
	int counter=0;
	
	for(int m=0; m<mMax; m++){                         //Nested loops to input values into the nxm matrix
		for(int n=0; n<nMax; n++)
			enByEmMatrix[n][m]=++counter;
	}
	
	for(int m=0; m<mMax; m++){                         //Nested loops to display the matrix in order to verify its contents
		for(int n=0; n<nMax; n++)
			cout  << setw(5) << enByEmMatrix[n][m];
		cout << endl << endl;
	}
	
	int nLow=0;
	int nHigh=nMax-1;
	int mLow=0;
	int mHigh=mMax-1;
	
	while ( counter > 0 ){
		for(int n=nLow; n<=nHigh; n++){
			cout << enByEmMatrix[n][mLow] << endl;
			counter--;
		}
		mLow++;
		for(int m=mLow; m<=mHigh; m++){
			cout << enByEmMatrix[nHigh][m] << endl;
			counter--;
		}
		nHigh--;
		for(int n=nHigh; n>=nLow; n--){
			cout << enByEmMatrix[n][mHigh] << endl;
			counter--;
		}
		mHigh--;
		for(int m=mHigh; m>=mLow; m--){
			cout << enByEmMatrix[nLow][m] << endl;
			counter--;
		}
		nLow++;
	}
	
	
return 0;
}
