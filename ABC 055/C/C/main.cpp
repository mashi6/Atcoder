
#include <iostream>
using namespace std;

//S:c = 1:2  2c = S 4cで１つの組み合わせ。
int main(){
	long long N,M;
	cin >> N >> M;
	if(M>=2*N){
		cout << (M + 2*N)/4 << endl;
	}else{
		cout << M/2 << endl;
	}
	return 0;
}
