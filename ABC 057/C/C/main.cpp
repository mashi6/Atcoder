
#include <iostream>
using namespace std;
using ll = long long;

ll max(ll X,ll Y){
	if(X>Y){
		return X;
	}else{
		return Y;
	}
}

int  ketasu(ll X){
	if(X>999999999){
		return 10;
	}else{
		if(X>99999999){
			return 9;
		}else{
			if(X>9999999){
				return 8;
			}else{
				if(X>999999){
					return 7;
				}else{
					if(X>99999){
						return 6;
					}else{
						
	
	if(X>9999){
		return 5;
	}else{
		if(X>999){
			return 4;
		}else{
			if(X>99){
				return 3;
			}else{
				if(X>9){
					return 2;
				}else{
					return 1;
				}
			}
		}
	}
					}}}}}
}

int main(){
	
	ll N;
	cin >> N;
	
	ll X=10000000000000;
	ll A;
	for(ll i=0;i<=100000;i++){
		if(X>abs(N-i*i)){
			A=i;
			X=abs(N-i*i);
		}
		if(X==0){
			cout << ketasu(A) << endl;
			return 0;
		}
	}
	
	ll count=0;
	
	while(true){
		if(N%(A-count)==0){
			A=A-count;
			break;
		}
		count++;
	}
	cout << ketasu(max(A,N/A)) << endl;
	return 0;
}
