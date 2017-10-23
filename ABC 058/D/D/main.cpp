
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	int n,m;
	ll x[100010]={},y[100010]={};
	ll width=0,height=0;
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> x[i];
	}
	for(int i=1;i<=m;i++){
		cin >> y[i];
	}
	
	for(int k=1;k<=n;k++){
		width+=(k-1)*x[k]-(n-k)*x[k];
		width=width%1000000007;
	}
	for(int l=1;l<=m;l++){
		height+=(l-1)*y[l]-(m-l)*y[l];
		height=height%1000000007;
	}
	
	cout << width*height%1000000007 << endl;
	return 0;
}
