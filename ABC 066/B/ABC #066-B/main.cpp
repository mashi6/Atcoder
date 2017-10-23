//
//  main.cpp
//  ABC #066-B
//
//  Created on 2017/08/17.

#include <iostream>
using namespace std;
int main(){
	string input,copy_1,copy_2;
	cin >> input;
	int length=input.size();
	int nowLength;
	
	for(int i=1;i<length;i++){
		input.erase(length-i);
		nowLength = input.size();
		if(nowLength%2!=0)continue;
		copy_1=input;
		copy_2=input;
		
		copy_1.erase(nowLength/2);
		copy_2=input.substr(nowLength/2);

		
//		cout << "copy_1:" << copy_1 << " copy_2:" << copy_2 << " nowLength:" << nowLength << endl;
		if(copy_1==copy_2)break;
	}
	cout << input.size() << endl;
	
	return 0;
}
