//
//  main.cpp
//  ABC #071-A
//
//  Created  on 2017/08/19.

#include <iostream>
using namespace std;
int main(){
	int x,a,b;
	cin >> x >> a >> b;
	if(abs(x-a)<abs(x-b)){
		cout << "A" << endl;
	}else{
		cout << "B" << endl;
	}
	
	return 0;
}
