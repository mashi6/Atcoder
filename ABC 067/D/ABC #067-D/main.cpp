//
//  main.cpp
//  ABC #067-D
//
//  Created on 2017/08/15.

#include <iostream>
#include <vector>
using namespace std;

using edge = struct{int to;int depth;};
vector<edge> tree[100010];
int depth[100010];

void dfs(int now,int parent,int now_depth){
	depth[now]=now_depth;
	for(auto &e : tree[now]){
		if(e.to == parent)continue;
		dfs(e.to,now,now_depth+1);
	}
}

int main(){
	int N;
	cin >> N;

	int fromWhite[100010]={0},fromBlack[100010]={0};
	int whiteTotal=0,blackTotal=0;
	
	for(int i=0;i<N-1;i++){
		int a,b;
		cin >> a >> b;
		tree[a].push_back({b,0});
		tree[b].push_back({a,0});
	}
	dfs(1,0,0);
	for(int i=1;i<=N;i++){
		fromBlack[i]=depth[i];
	}
	dfs(N,N+1,0);
	for(int i=1;i<=N;i++){
		fromWhite[i]=depth[i];
	}
	
	for(int i=1;i<=N;i++){
		if(fromBlack[i]<=fromWhite[i]){
			blackTotal++;
		}else{
			whiteTotal++;
		}
	}
	
	if(blackTotal>whiteTotal){
		cout << "Fennec" << endl;
	}else{
		cout << "Snuke" << endl;
	}
	
	return 0;
}
