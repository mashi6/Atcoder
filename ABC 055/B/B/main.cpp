
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	ll array[100010];
	array[0]=1;
	for(int i=1;i<100010;i++){
		array[i] = (i*array[i-1])%1000000007;
	}
	
	int N;
	cin >> N;
	cout << array[N] << endl;
	return 0;
}
