
#include <iostream>
using namespace std;

int main(){
	int N,M;
	long long a[50],b[50],c[50],d[50];
	long long far;
	pair<long long,long long> answer[50];//first:距離
	cin >> N >> M;
	for(int i=0;i<N;i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0;i<M;i++){
		cin >> c[i] >> d[i];
	}
	
	for(int i=0;i<50;i++){
		answer[i].first=100000000000;
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			far=abs(a[i]-c[j])+abs(b[i]-d[j]);
			if(answer[i].first>far){
				answer[i].first=far;
				answer[i].second=j;
			}
		}
		cout << answer[i].second+1 << endl;
	}
	
	return 0;
}
