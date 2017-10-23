//
//  main.cpp
//  ABC #064-C
//
//  Created on 2017/08/22.

#include <iostream>
using namespace std;

int main(){
	int N;
//	int array[101]={};
	int input;
	int color[9]={};
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> input;
		color[min((input/400),8)]++;
	}
	
	int Min=0,Max=0;
	for(int i=0;i<8;i++){
		if(color[i]>0){
			Min++;
			Max++;
		}
	}
	Max = Max+color[8];
	if(Min==0){
		Min=1;
	}
	cout << Min << " " << Max;
	
	return 0;
}
