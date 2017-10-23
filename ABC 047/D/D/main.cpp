
#include <iostream>
using namespace std;
using ll = long long;

ll Min(ll x,ll y){
	if (x > y){
		return y;
	}else{
		return x;
	}
}
ll Max(ll x,ll y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int N,_;
	ll Array[100010];
	ll input;
	ll mins[100010];
	ll min = 10000000000,max = 0;
	
	ll maxrieki = 0;
	cin >> N >> _;
	for(int i=0;i<N;i++){
		cin >> Array[i];
		min = Min(min,Array[i]);
		mins[i] = min;
		maxrieki = Max(maxrieki,Array[i] - mins[i]);
	}
	
	int answer = 0;
	for(int i=0;i<N;i++){
		if (maxrieki == Array[i] - mins[i]){
			answer ++;
		}
	}
	
	cout << answer << endl;
	
	return 0;
}
