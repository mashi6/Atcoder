
#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int N;
	cin >> N;
	int gusu=0;
	int input;
	for(int i=0;i<N;i++){
		cin >> input;
		if(input % 2 == 0){
			gusu++;
		}
	}
	
	
	cout << pow(3,N) - pow(2,gusu) << endl;
	return 0;
}
