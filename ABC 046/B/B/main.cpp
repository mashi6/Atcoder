
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	ll N,K;
	cin >> N >> K;
	ll a=1;
	for(int i=0;i<N-1;i++){
		a = a * (K-1);
	}
	
	cout << K*a << endl;
	return 0;
}
