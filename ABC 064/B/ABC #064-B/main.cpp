//
//  main.cpp
//  ABC #064-B
//
//  Created on 2017/08/22.

#include <iostream>
using namespace std;
int main(){
	int N;
	int input;
	int Max=0,Min=10000;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> input;
		Max=max(Max,input);
		Min=min(Min,input);
	}
	cout << Max-Min << endl;
	
	return 0;
}
