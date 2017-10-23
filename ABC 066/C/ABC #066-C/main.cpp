//
//  main.cpp
//  ABC #066-C
//
//  Created on 2017/08/17.

#include <iostream>
using namespace std;
using lli = long long;
int main(){
	int n;
	lli gu_su[200010]={0};
	lli kisu_[200010]={0};
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cin >> kisu_[i];//i = 1 , 3 , 5 , 7...
		}else{
			cin >> gu_su[i];//i = 2 , 4 , 6 , 8...
		}
	}

	if(n%2==0){
		for(int i=n;i>=2;i=i-2){
			cout << gu_su[i] << " ";
		}
		for(int i=1;i<=n-1;i=i+2){
			cout << kisu_[i] << " ";
		}
		cout << endl;
	}else{
		for(int i=n;i>=1;i=i-2){
			cout << kisu_[i] << " ";
		}
		for(int i=2;i<=n-1;i=i+2){
			cout << gu_su[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
