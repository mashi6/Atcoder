//
//  main.cpp
//  ABC #065-A
//
//  Created on 2017/08/18.

#include <iostream>
using namespace std;
int main(){
	int X,A,B;
	cin >> X >> A >> B;
	
	if(A>=B){
		cout << "delicious" << endl;
	}else if(A<B&&B-A>X){
		cout << "dangerous" << endl;
	}else{
		cout << "safe" << endl;
	}
	return 0;
}
