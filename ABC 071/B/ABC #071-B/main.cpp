//
//  main.cpp
//  ABC #071-B
//
//  Created by 豊岡真知 on 2017/08/20.
//  Copyright © 2017年 豊岡真知. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
	bool array[30]={false};
	string input;
	cin >> input;
	for(int i=0;i<input.size();i++){
		array[input[i]-97]=true;
	}//a=0 b=1 ...
	for(int i=0;i<26;i++){
		if(!array[i]){
			char a=i+97;
			cout << a << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}
