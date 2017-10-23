//
//  main.cpp
//  ABC #067-B
//
//  Created on 2017/08/15.

#include <iostream>
using namespace std;
int main(){
	int N,K,answer=0;
	int I[50]={0};
	cin >> N >> K;
	for(int i=0;i<N;i++){
		cin >> I[i];
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			int memo=min(I[j],I[j+1]);
			I[j]=max(I[j],I[j+1]);
			I[j+1]=memo;
		}
	}
	
	for(int i=0;i<K;i++){
		answer+=I[i];
	}
	
	cout << answer << endl;
	return 0;
}
