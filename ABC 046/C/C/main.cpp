
#include <iostream>
using namespace std;
using ll = long long;

ll bairitu(ll x,ll y){
	ll ret = x/y;
	if(x % y != 0){
		ret ++;
	}
	return ret;
}


ll max(ll x,ll y){
	if (x > y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int N;
	ll T[1001],A[1001];
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> T[i] >> A[i];
	}
	
	for(int i=0;i<N-1;i++){
		ll t = bairitu(T[i],T[i+1]);
		ll a = bairitu(A[i],A[i+1]);
		
		ll Max = max(t,a);
		
		if(Max <= 1)continue;
		
		T[i+1] = Max * T[i+1];
		A[i+1] = Max * A[i+1];
		Max = 0;
	}
	
	cout << T[N-1] + A[N-1] << endl;

	return 0;
}
