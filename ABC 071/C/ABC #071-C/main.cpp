//
//  main.cpp
//  ABC #071-C
//
//  Created on 2017/08/20.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int max(long long a,long long b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int N;
	long long answer=0;
	vector <long long>array;
	vector <long long>twice;
	vector <long long>fourth;
	cin >> N;
	for(int i=0;i<N;i++){
		long long a;
		cin >> a;
		array.push_back(a);
	}
	sort(array.begin(),array.end());
	
	long long memo=0;
	for(int i=0;i<array.size();i++){
		if(memo!=array[i]){
			memo=array[i];
		}else{
//			cout << "twice " << array[i] << endl;
			twice.push_back(array[i]);
			memo=0;
		}
	}
	
	memo=0;
	for(int i=0;i<twice.size();i++){
		if(memo!=twice[i]){
			memo=twice[i];
		}else{
//			cout << "fourth " << twice[i] << endl;
			fourth.push_back(twice[i]);
		}
	}
	
	if(fourth.size()>0){
		answer=max(answer,fourth[fourth.size()-1]*fourth[fourth.size()-1]);
//		cout << fourth[fourth.size()-1]*fourth[fourth.size()-1] << endl;
	}
	if(twice.size()>0){
		long long a=0,b=0;
		a=twice[twice.size()-1];
		for(int i=twice.size()-1;i>=0;i--){
			b=twice[i];
//			cout << "b " <<  b<<endl;
			if(a!=b){
				break;
			}
		}
//		cout << a << " "<<b << endl;
		answer=max(answer,a*b);
//		cout << a*b << endl;
	}
	cout << answer << endl;
	
	return 0;
}
