//
//  main.cpp
//  ABC #068-B
//
//  Created on 2017/08/13.

#include <iostream>
#include <math.h>
using namespace std;

int nannkaiwareru(int x){
	int count = 0;
	while((x%2)==0){
		count++;
		x=x/2;
	}
	return count;
}

int main(){
	int n;
	int answer=0;
	cin >> n;
	
	int i=0;
	while(n-i>0){
//	for(int i=0;i<100;i++){
		answer=max(answer,nannkaiwareru(n-i));
		i++;
	}
	cout << pow(2,answer) << endl;;
	return 0;
}
