
#include <iostream>
using namespace std;


int main(){
	int K,X,Y,N;
	cin >> N >> K >> X >> Y;
	if(N > K){
		cout << K*X + (N-K)*Y << endl;
	}else{
		cout << N*X << endl;
	}
	return 0;
}
