//
//  main.cpp
//  ABC #063-B
//
//  Created on 2017/08/23.

#include <iostream>
using namespace std;
int main(){
	string S;
	bool check[26]={};
	cin >> S;
	
	for(int i=0;i<S.size();i++){
		if(check[S[i]-'a']){
			cout << "no" << endl;
			return 0;
		}else{
			check[S[i]-'a'] = true;
		}
	}
	cout << "yes" << endl;
	return 0;
}
