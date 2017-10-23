//
//  main.cpp
//  ABC #062-B
//
//  Created on 2017/08/24.

#include <iostream>
using namespace std;
int main(){
	int H,W;
	char image[105][105]={};
	cin >> H >> W;
	
	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			image[i][j]='#';
		}
	}
	for(int i=1;i<=H;i++){
		for(int j=1;j<=W;j++){
			cin >> image[i][j];
		}
	}
	
	for(int i=0;i<=H+1;i++){
		for(int j=0;j<=W+1;j++){
			cout << image[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
