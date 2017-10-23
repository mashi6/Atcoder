//
//  main.cpp
//  ABC #068-D
//
//  Created by 豊岡真知 on 2017/08/13.
//  Copyright © 2017年 豊岡真知. All rights reserved.
//

#include <iostream>
using namespace std;
using lli = long long int;

int main(){
	lli K;
	lli array[50]={0};
	for(lli i=0;i<50;i++){
		array[i]=i;
	}
	
	cin >> K;
	
	for(lli i=0;i<50;i++){
		array[i]+=(K/50);
	}
	for(lli i=0;i<K%50;i++){
		array[49-i]++;
	}
	cout << 50 << endl;
	
	for(int i=0;i<50;i++){
		cout << array[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
