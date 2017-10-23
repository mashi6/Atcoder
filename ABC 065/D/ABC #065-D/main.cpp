//
//  main.cpp
//  ABC #065-D
//
//  Created on 2017/08/18.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef struct edge{
	int to;
	int cost;
};
vector<edge>tree[100010];
int N;

//priority_queue<pair<int,int>>MST;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>MST;
//cost,to

void showMST(){
	cout << "[size] ";
	cout << MST.size() << endl;
	cout << "[top] ";
	cout << "to : " << MST.top().second << " cost : " << MST.top().first << endl;
	
}

void showTree(){
	
	for(int i=0;i<N;i++){
		cout << "showTree" << endl;
		for(int j=0;j<tree[i].size();j++){
			cout << "node = " << i << " : to = " << tree[i][j].to << " : cost = " << tree[i][j].cost << endl;
		}
	}
}
int main(){
	
	int answer=0;
	int check[100010]={};
	vector<pair<int,int>> cities_x;//x座標,その都市
	vector<pair<int,int>> cities_y;
	
	


	
	cin >> N;
	for(int i=0;i<N;i++){//街は0〜N-1まで
		int x,y;
		cin >> x >> y;
		cities_x.push_back(make_pair(x,i));
		cities_y.push_back(make_pair(y,i));
	}
	
	sort(cities_x.begin(),cities_x.end());//x座標で都市をソート
	sort(cities_y.begin(),cities_y.end());//y座標で都市をソート
	
	int node,to,cost;
	for(int i=0;i<N;i++){
		if(i!=0){//cities_x[i].second
			node = cities_x[i].second;
			to = cities_x[i-1].second;
			cost = abs(cities_x[i].first-cities_x[i-1].first);
			
			tree[node].push_back(edge{to,cost});
			
		}
		if(i!=N-1){
			node = cities_x[i].second;
			to = cities_x[i+1].second;
			cost = abs(cities_x[i].first-cities_x[i+1].first);
			
			tree[node].push_back(edge{to,cost});
		}
		if(i!=0){
			node = cities_y[i].second;
			to = cities_y[i-1].second;
			cost = abs(cities_y[i].first-cities_y[i-1].first);
			
			tree[node].push_back(edge{to,cost});
			
		}
		if(i!=N-1){
			node = cities_y[i].second;
			to = cities_y[i+1].second;
			cost = abs(cities_y[i].first-cities_y[i+1].first);
			
			tree[node].push_back(edge{to,cost});
		}
//		tree[cities_x[i].second].push_back(edge{cities_x[i+1].second,min(abs(cities_x[i].first-cities_x[i+1].first),abs(cities_y[i].first-cities_y[i+1].first))});
//		tree[cities_x[i+1].second].push_back(edge{cities_x[i].second,min(abs(cities_x[i].first-cities_x[i+1].first),abs(cities_y[i].first-cities_y[i+1].first))});
	}
	
//	showTree();

	
	for(int i=0;i<tree[0].size();i++){
		MST.push(make_pair(tree[0][i].cost,tree[0][i].to));
	}
//	showMST();
	check[0]=1;
	
	pair<int,int> memo;// <cost,to>
	
	while(!MST.empty()){
		memo=MST.top();
		MST.pop();
		if(check[memo.second]==0){
//			cout << "to : " << memo.second << endl;
			answer+=memo.first;
			check[memo.second]=1;
		
			for(int i=0;i<tree[memo.second].size();i++){
				MST.push(make_pair(tree[memo.second][i].cost,tree[memo.second][i].to));
			}
//			showMST();
		}
	}
	
	cout << answer << endl;
//	sort(tree[0].begin(),tree[0].end(),[](const edge& x,const edge& y){return x.to < y.to;});
	return 0;
}
