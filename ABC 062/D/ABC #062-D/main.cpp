//
//  main.cpp
//  ABC #062-D
//
//  Created on 2017/08/24.

#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

ll max(ll x,ll y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}
int main(){
	ll N,big_All=0,small_All=0;
	int array[300030]={};
	ll big_array[300030]={};
	ll small_array[300030]={};
	ll answer=-10000000000000000;
	priority_queue<int,vector<int>,greater<int>>big;//前半
	priority_queue<int>small;//後半
	
	cin >> N;
	for(ll i=1;i<=3*N;i++){
		cin >> array[i];
		if(i<=N){
			big_All+=array[i];
			big.push(array[i]);
		}else if(i>2*N){
			small_All+=array[i];
			small.push(array[i]);
		}
	}
	
	big_array[0]=big_All;
	small_array[N]=small_All;
	for(int i=1;i<=N;i++){
		big.push(array[N+i]);
		big_All+=array[N+i];
		big_All-=big.top();
		big.pop();
		big_array[i]=big_All;
	}
	for(int i=1;i<=N;i++){
		small.push(array[2*N-i+1]);
		small_All+=array[2*N-i+1];
		small_All-=small.top();
		small.pop();
		small_array[N-i]=small_All;
	}
	
	for(int i=0;i<=N;i++){
		answer=max(answer,big_array[i]-small_array[i]);
	}
	cout << answer << endl;
	
	return 0;
}
