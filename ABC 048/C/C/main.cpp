
#include <iostream>
using namespace std;
using ll = long long;
ll x;
ll func(ll X,ll Y){//Xを減らす
	ll ret;//どれだけ減らすか
	ret = (X+Y)-x;
	if(ret > X){
		ret = ret - X;
	}
	return ret;
}

int main(){
	int N;
	ll array[100010],answer=0;
	cin >> N >> x;
	for(int i=0;i<N;i++){
		cin >> array[i];
	}
	if(array[0]>x){
		answer += (array[0]-x);
		array[0] = x;
	}
	for(int i=0;i<N-1;i++){
		if(array[i]+array[i+1]<=x)continue;
		ll memo = array[i+1];
		array[i+1] -= func(array[i+1],array[i]);
		answer += (memo - array[i+1]);

	}
	cout << answer << endl;
	return 0;
}
