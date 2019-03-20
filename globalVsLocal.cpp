#include <iostream>
using namespace std;

void parameters(int num1, int num2);
void useGlobals();

int gnum1=10;
int gnum2=-5;

int main(){
	int num1=20;
	int num2=13;
	
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num1, num2);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num2, num1);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	useGlobals();
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	cout << endl << endl;
	
	num1=94;
	num2=50;
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num1, num2);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num2, num1);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	useGlobals();
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	cout << endl << endl;
	
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num1, num2);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	parameters(num2, num1);
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	useGlobals();
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	
	return 0;
}

void parameters(int num1, int num2){
	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
}

void useGlobals(){
	cout << "num1 is: " << gnum1 << endl;
	cout << "num2 is: " << gnum2 << endl;
}
