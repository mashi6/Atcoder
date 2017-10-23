
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	ll X;
	cin >> X;
	ll t=0;
	while(true){
		if((t*(t+1))/2>=X){
			cout << t << endl;
			break;
		}
		t++;
	}
	return 0;
}
