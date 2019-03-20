#include <iostream>
using namespace std;

int main(){
	int numList[5] = {12, 22, 6, 400, 2};
	int productList[5];
	int tempProduct=1;
	
	for(int i=0; i<5; i++){
		tempProduct*=numList[i];
	}
	
	for(int i=0; i<5; i++){
		productList[i]=tempProduct/numList[i];
		cout << i << " : " << productList[i] << endl;
	}
	
	return 0;
}
