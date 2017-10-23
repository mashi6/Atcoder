
#include <iostream>
using namespace std;


int main(){
	int N,K,M;
	cin >> N >> M >> K;
	
	for(int i=0;i<=N;i++){
		for(int j=0;j<=M;j++){
			if(j*N + i*M - i*j*2 == K){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	
	cout << "No" << endl;
	return 0;
}
