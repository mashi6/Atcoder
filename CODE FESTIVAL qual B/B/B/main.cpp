
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
	int N,M;
	vector <ll>D;
	vector <ll>T;
	cin >> N;
	for(int i=0;i<N;i++){
		ll input;
		cin >> input;
		D.push_back(input);
	}
	cin >> M;
	for(int i=0;i<M;i++){
		ll input;
		cin >> input;
		T.push_back(input);
	}
	
	sort(T.begin(),T.end());
	sort(D.begin(),D.end());
	int Tcount = 0;
	int Dcount = 0;
	while(Tcount < M && Dcount < N){
		if(T[Tcount] < D[Dcount]){
			cout << "NO" << endl;
			return 0;
		}else if(T[Tcount] > D[Dcount]){
			Dcount++;
		}else{
			Dcount++;
			Tcount++;
		}
	}
	
	if(Tcount+1 == N){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
