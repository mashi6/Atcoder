//
//  main.cpp
//  ABC #070-B
//
//  Created on 2017/08/12.


#include <iostream>
using namespace std;
int main(){
	int A_1,A_2,B_1,B_2;
	cin >> A_1 >> A_2 >> B_1 >> B_2;
	
	int answer = min(A_2,B_2) - max(A_1,B_1);
	
	if(answer<0){
		cout << 0 << endl;
	}else{
		cout << answer << endl;
	}

	return 0;
}
