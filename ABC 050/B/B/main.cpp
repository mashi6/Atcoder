
#include <iostream>
using namespace std;

int N,M;
int T[101],P[101],X[101];
int sum(){
	int ret=0;
	for(int i=1;i<=N;i++){
		ret += T[i];
	}
	return ret;
}

int main(){
	
	
	cin >> N;
	for(int i=1;i<=N;i++){
		cin >> T[i];
	}
	cin >> M;
	for(int i=0;i<M;i++){
		cin >> P[i] >> X[i];
	}
	
	for(int i=0;i<M;i++){
		int memo = T[P[i]];
		T[P[i]] = X[i];
		cout << sum() << endl;
		T[P[i]] = memo;
	}
	
	return 0;
}
