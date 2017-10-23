//
//  main.cpp
//  ABC #064-D
//
//  Created on 2017/08/22.

#include <iostream>
using namespace std;
int main(){
	int N;
	string S;
	string answer="";
	cin >> N >> S;
	int right=0,left=0;
	
	
	for(int i=0;i<N;i++){
		if(S[i]=='('){
			right++;
		}else{
			if(right>0){
				right--;
			}else{
				left++;
			}
		}
	}
	
	for(int i=0;i<left;i++){
		answer+='(';
	}
	answer+=S;
	for(int i=0;i<right;i++){
		answer+=')';
	}
	cout << answer << endl;
	
	return 0;
}
