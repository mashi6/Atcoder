//
//  main.cpp
//  ABC #070-D
//
//  Created on 2017/08/13.

#include <iostream>
#include <vector>
using namespace std;
using lli = long long int;
const int limit = 100010;

using edge = struct{int to; lli cost;};
vector<edge> tree[limit];//edge型を格納するvectorを配列で宣言
lli depth[limit];

void dfs(int v,int p,lli d){//今いる頂点、今いる頂点の親、今いる頂点から求めたい頂点までの距離。
	depth[v] = d;
	for(auto &e : tree[v]){
		if(e.to == p)continue;//親に行かないようにする
		dfs(e.to,v,d + e.cost);//子、今いる頂点を親とする、今いる頂点までの距離＋今いる頂点から子までの距離
	}
}

int main(){
	int n;
	cin >> n;
	
	for(int i=0;i<n-1;i++){
		int a,b,c;
		cin >> a >> b >> c;
		a--,b--;
		tree[a].push_back({b,c});
		tree[b].push_back({a,c});
	}
	
	int q,k;
	cin >> q >> k;
	k--;
	
	dfs(k,-1,0);
	for(int i=0;i<q;i++){
		int x,y;
		cin >> x >> y;
		x--,y--;
		cout << depth[x] + depth[y] << endl;
	}
	return 0;
}
