
#include <iostream>
#include <vector>

using namespace std;
const int INF = 1000000;

struct Node{
	vector<int>to;
	vector<int>cost;
};
struct node{
	int cost;
	bool visited;
};
Node nodes[101];
int dist[101][101];

void dijkstra(int x,int y){
	int targetNode;
	int cost[101];//xからの距離を保存する
	node mawariNodes[101];
	
	for(int i=0;i<101;i++){
		cost[i] = INF;
		mawariNodes[i].cost = INF;
		mawariNodes[i].visited = false;
	}
	
	targetNode = x;
	
	cost[targetNode] = 0;
	mawariNodes[targetNode].visited = true;
	mawariNodes[targetNode].cost = 0;
	
	while(true){
		
		for(int i=0;i<nodes[targetNode].to.size();i++){
			int now = nodes[targetNode].to[i];//nowは頂点番号　iはnodesに使う
			if(mawariNodes[now].visited)continue;//行ったことがあればぶち込まない
			mawariNodes[now].cost = min(mawariNodes[now].cost,cost[targetNode] + nodes[targetNode].cost[i]);//targetNodeの周りの頂点をぶち込む
		}
		
		int min=INF;
		int nodeNumber = -1;
		for(int i=0;i<101;i++){
			if(mawariNodes[i].visited)continue;//確定してないノード
			if(min > mawariNodes[i].cost){//で一番コストが低いノード
				min = mawariNodes[i].cost;
				nodeNumber = i;
			}
		}
		if(nodeNumber == -1)break;
		if(mawariNodes[y].visited)break;
		
		mawariNodes[nodeNumber].visited = true;
		cost[nodeNumber] = mawariNodes[nodeNumber].cost;
		targetNode = nodeNumber;
	}
	dist[x][y] = cost[y];
	dist[y][x] = cost[y];
}
int main(){
	int N,M;
	int a[1001],b[1001],c[1001];
	
	
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			if(i == j){
				dist[i][j] = 0;
			}else{
				dist[i][j] = INF;
			}
		}
	}
	
	cin >> N >> M;
	for(int i=0;i<M;i++){
		cin >> a[i] >> b[i] >> c[i];
		a[i]--;
		b[i]--;
		dist[a[i]][b[i]] = c[i];
		dist[b[i]][a[i]] = c[i];
		nodes[a[i]].to.push_back(b[i]);
		nodes[a[i]].cost.push_back(c[i]);
		nodes[b[i]].to.push_back(a[i]);
		nodes[b[i]].cost.push_back(c[i]);
	}

	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			if(i==j)continue;
			dijkstra(i,j);
		}
	}

	int answer = M;
	for(int i=0;i<M;i++){//全ての辺について
		bool isShortest = false;
		for(int j=0;j<N;j++){
			if(dist[j][a[i]] + c[i] == dist[j][b[i]]){
				isShortest = true;
			}
		}
		if(isShortest){
			answer = answer - 1;
		}
	}
	
	cout << answer << endl;
	
	return 0;
}
