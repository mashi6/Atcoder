//
//  main.cpp
//  ABC #065-B
//
//  Created on 2017/08/18.

#include <iostream>
using namespace std;
int main(){
	int N;
	int array[100010] = {0};
	int count=0;
	cin >> N;
	
	for(int i=1;i<=N;i++){
		cin >> array[i];
	}
	int j=1;
	while(array[j]){
		if(j==2){
			cout << count << endl;
			return 0;
		}
		count++;
		int memo=array[j];
		array[j]=0;
		j=memo;
	}
	
	cout << -1 << endl;
	return 0;
}
