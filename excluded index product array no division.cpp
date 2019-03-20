#include <iostream>
using namespace std;

int main(){
	int numList[5] = {12, 22, 6, 400, 2};
	int productList[5];
	int runningProduct;
	
	for(int i=0; i<5; i++){
		runningProduct=1;
		for(int j=0; j<5; j++){
			if(!(i==j))
				runningProduct*=numList[j];
		}
		productList[i]=runningProduct;
		cout << i << " : " << productList[i] << endl;
	}
	return 0;
}
