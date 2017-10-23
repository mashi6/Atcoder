//
//  main.cpp
//  ABC #063-C
//
//  Created on 2017/08/23.

#include <iostream>

using namespace std;
int main(){
	int N,s[101]={};
	int answer=0,Min=1000;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> s[i] ;
		answer+=s[i];
	}
	Min=answer;
	for(int i=0;i<N;i++){
		if(s[i]%10!=0){
			Min=min(Min,s[i]);
		}
	}
	
	if(answer%10==0){
		cout << answer - Min << endl;
	}else{
		cout << answer << endl;
	}
	return 0;
}
