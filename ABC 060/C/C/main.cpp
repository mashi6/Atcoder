
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	int N;
	ll T,t[200010]={},answer=0;
	
	cin >> N >>T;
	for(int i=0;i<N;i++){
		cin >> t[i] ;
	}
	
	for(int i=0;i<N-1;i++){
		if(t[i+1]-t[i]<T){
			answer+=t[i+1]-t[i];
		}else{
			answer+=T;
		}
	}
	
	answer+=T;
	
	cout << answer << endl;
	
	return 0;
}
