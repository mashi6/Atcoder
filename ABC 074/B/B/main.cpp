
#include <iostream>
using namespace std;


int main(){
	int N,K;
	cin >> N >> K;
	int x[101];
	for(int i=0;i<N;i++){
		cin >> x[i];
	}
	int answer = 0;
	for(int i=0;i<N;i++){
		answer = answer + min(x[i]*2,abs(x[i]-K)*2);
	}
	cout << answer << endl;
	
	return 0;
}
