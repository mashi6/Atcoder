//
//  main.cpp
//  ABC #069-D
//
//  Created on 2017/08/11.

#include <iostream>
using namespace std;
int main() {
	int table[102][102];
	int N,H,W;
	int array[10002]={0};
	int  input;
	
	cin >> H >> W >> N;
	
	int a=0;
	for(int i=1;i<=N;i++){
		cin >> input;
		for(int j=1;j<=input;j++){
			a++;
			array[a]=i;
		}
	}
	
	a=0;
	
	for(int j=1;j<=H;j++){
		for(int i=1;i<=W;i++){
			a++;
			table[j][i]=array[a];
		}
		j++;
		if(j<=H){
			for(int i=W;i>=1;i--){
				a++;
				table[j][i]=array[a];
			}
		}
	}
	
	for(int j=1;j<=H;j++){
		for(int i=1;i<=W;i++){
			cout << table[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
