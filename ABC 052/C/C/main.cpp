
#include <iostream>
using namespace std;
using ll = long long;

ll Array[1001];
void soinsu_(int);

void soinsu_(int x){
	int count = 0;
	int X = x;
	for(int i=2;i<=X;){
		if(x % i == 0){
			count++;
			x = x / i;
		}else{
			Array[i] += count;
			count = 0;
			i++;
		}
	}
}

int main(){
	int N;
	ll answer = 1;
	
	cin >> N;
	
	for(int i=0;i<1001;i++){
		Array[i] = 0;
	}
	for(int i=1;i<=N;i++){
		soinsu_(i);
	}
	
	for(int i=0;i<1001;i++){
		answer = answer * (Array[i]+1) % 1000000007;
	}
	
	cout << answer << endl;
	return 0;
}
