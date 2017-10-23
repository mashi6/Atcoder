
#include <iostream>

using namespace std;
using ll = long long;
const ll INF = 1LL << 50;

int main(){
	int N,M;
	int a[2005]={},b[2005]={};
	ll c[2005];
	ll dist[1005]={};
	cin >> N >> M;
	
	for(int i=0;i<M;i++){
		cin >> a[i] >> b[i] >> c[i];
		c[i] = -c[i];
	}
	
	for(int i=0;i<1005;i++){
		dist[i]=INF;
	}
	dist[0] = 0;
	
	for(int i=0;i<N-1;i++){// 最短経路の最大の長さN-1を調べる。(閉路がなければここで調べきられる)
		for(int j=0;j<M;j++){//全ての辺について調べる
			if(dist[a[j]-1] == INF) continue;// 始辺の方の頂点がまだ更新されていなければ、continue
			
			if(dist[b[j]-1] > dist[a[j] - 1] + c[j]){// 短くなれば更新
				dist[b[j]-1] = dist[a[j] - 1] + c[j];
			}
		}
	}
	
	ll ans = dist[N-1];
	
	bool negative[1005];
	
	for(int i=0;i<N;i++){
		negative[i] = false;
	}
	
	for(int i=0;i<N;i++){// 閉路があれば、どこからかtrueになり、ゴール(頂点N-1)もtrueになる。
		for(int j=0;j<M;j++){
			if(dist[a[j]-1] == INF)continue;
		
			if(dist[b[j]-1] > dist[a[j]-1] + c[j]){
				dist[b[j]-1] = dist[a[j]-1] + c[j];
				negative[b[j] - 1]=true;// 一回通ったところはtrueに
			}
			
			if(negative[a[j]-1] == true){// 更新されなくても親頂点が一回通っていれば子頂点も一回通っている
				negative[b[j]-1] = true;
			}
		}
	}
	
	if(negative[N-1]){
		cout << "inf" << endl;
	}else{
		cout << -ans << endl;
	}
	
	return 0;
}
