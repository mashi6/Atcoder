//
//  main.cpp
//  ABC #064-A
//
//  Created on 2017/08/22.

#include <iostream>
using namespace std;
int main(){
	int r,g,b;
	int number;
	cin >> r >> g >> b;
	number = 100*r+10*g+b;
	if(number%4==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
