//
//  main.cpp
//  ABC #069-C
//
//  Created on 2017/08/11.


#include <iostream>
using namespace std;
int main() {
	int n,b_1=0,b_2=0,b_4=0;
	long long int input;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> input;
		if(input%4==0){
			b_4++;
		}else if(input%2==0){
			b_2++;
		}else{
			b_1++;
		}
		
	}
	
	if(b_2==0){
		if(b_1<=b_4+1){
			cout << "Yes";
		}else{
			cout << "No";
		}
	}else{
		if(b_1<=b_4){
			cout << "Yes";
		}else{
			cout << "No";
		}
	}
	
	
	return 0;
}
