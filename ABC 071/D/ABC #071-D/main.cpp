//
//  main.cpp
//  ABC #071-D
//
//  Created on 2017/08/22.

#include <iostream>
using namespace std;
using ll = long long;

int main(){
	int N;
	ll answer=1;
	int count=0;
	char judge;
	
	string S_1,S_2;
	cin >> N >> S_1 >> S_2;
	
	if(S_1[count]==S_2[count]){
		judge='X';
		count++;
		answer*=3;
	}else{
		judge='Y';
		count=count+2;
		answer*=6;
	}
	
	while(count<N){
		if(S_1[count]==S_2[count]){//X
			if(judge=='X'){
				answer=answer*2%1000000007;
			}
			
			judge='X';
			count++;
		}else{//Y
			if(judge=='X'){
				answer=answer*2%1000000007;
			}else{//Y-Y
				answer=answer*3%1000000007;
			}
			judge='Y';
			count = count + 2;
		}
	}
	cout << answer << endl;
	

	return 0;
}
