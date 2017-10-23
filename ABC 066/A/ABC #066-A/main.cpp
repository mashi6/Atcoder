//
//  main.cpp
//  ABC #066-A
//
//  Created on 2017/08/17.

#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << min(a+b,min(b+c,c+a)) << endl;

	return 0;
}
