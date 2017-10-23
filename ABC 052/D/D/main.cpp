
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
	int N;
	ll A,B;
	vector<ll>X;
	cin >> N >> A >> B;
	ll input;
	for(int i=0;i<N;i++){
		cin >> input;
		X.push_back(input);
	}
	
	ll answer=0;
	for(int i=0;i<N-1;i++){
		if((X[i+1]-X[i])*A > B){
			answer += B;
		}else{
			answer += (X[i+1]-X[i])*A;
		}
	}
	cout << answer << endl;
	return 0;
}
