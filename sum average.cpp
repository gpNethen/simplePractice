#include <iostream>
using namespace std;

int main(){
	float first;
	float second;
	float sum=0;
	float count=0;
	float avg=0;

	cout << "Enter the first positive integer: " << endl;
	cin >> first;
	cout << "Enter the second positive integer: " << endl;
	cin >> second;

	for(int i=first; i<=second; i++){
		sum+=i;
		count++;
	}
	avg = (sum / count);
	cout << "The mean of the sum from " << first << " to " << second << " is " << avg << endl;
return 0;
}
