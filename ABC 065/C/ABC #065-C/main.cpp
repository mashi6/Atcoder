//
//  main.cpp
//  ABC #065-C
//
//  Created on 2017/08/18.

#include <iostream>
using namespace std;
int main(){
	int N,M;
	long long array[100010]={0};
	cin >> N >> M;
	
	for(int i=1;i<=max(N,M);i++){
		if(i==1){
			array[i]=1;
		}else{
			array[i]=(i*array[i-1])%1000000007;
		}
	}
	
	if(N==M){
		cout << (2*array[N]*array[M])%1000000007 << endl;
	}else if(N-1==M||M-1==N){
		cout << (array[N]*array[M])%1000000007 << endl;
	}else{
		cout << 0 << endl;
	}
	
	return 0;
}
