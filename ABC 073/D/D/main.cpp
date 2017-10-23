
#include <iostream>
#include <vector>
using namespace std;
const int nmax=200;
const int INF=1000000000;

struct Node{
	vector<int> to;
	vector<int> cost;
};
struct node{
	int cost;
	bool visited;
};

int operate();

int dist[nmax][nmax];

Node nodes[nmax];

int N,M,R;
int r[8]={};
int patern[8]={};
long long Ans=INF;
bool checked[8];

long long min(long long x,long long y){
	if (x<y){
		return x;
	}else{
		return y;
	}
}

void dijkstra(int x,int y){
	if(dist[x][y] != INF)return;
	int TargetNode = x;
	int cost[nmax];
	for(int i=0;i<nmax;i++){
		cost[i] = INF;
	}
	node otherNodes[nmax];
	for(int i=0;i<nmax;i++){
		otherNodes[i].cost = INF;
		otherNodes[i].visited = false;
	}
	cost[TargetNode] = 0;
	otherNodes[TargetNode].cost = 0;
	otherNodes[TargetNode].visited = true;
	
	while(true){
		for(int i=0;i<nodes[TargetNode].to.size();i++){
			int now = nodes[TargetNode].to[i];
			if(otherNodes[now].visited)continue;
			otherNodes[now].cost = min(otherNodes[now].cost,cost[TargetNode] + nodes[TargetNode].cost[i]);
		}
		int Min=INF;
		int thenNode=-1;
		for(int i=0;i<nmax;i++){
			if(otherNodes[i].visited)continue;
			if(otherNodes[i].cost < Min){
				Min = min(otherNodes[i].cost,Min);
				thenNode = i;
			}
		}
		
		if(thenNode == -1)break;
		TargetNode = thenNode;
		otherNodes[TargetNode].visited = true;
		cost[TargetNode] = otherNodes[TargetNode].cost;
		
		if(thenNode == y)break;
		
	}
	dist[x][y] = cost[y];
	dist[y][x] = cost[y];
	
}

void kumiawase(int I,int junban){
	patern[junban]=r[I];
	if(junban == R-1){
		Ans = min(Ans,operate());
	}else{
		for(int i=0;i<R;i++){
			if(checked[i])continue;
			checked[i] = true;
			kumiawase(i,junban+1);
			checked[i] = false;
		}
	}
}
				  
int operate(){
	int ret=0;
	for(int i=0;i<R-1;i++){
		dijkstra(patern[i],patern[i+1]);
		ret = ret + dist[patern[i]][patern[i+1]];
	}
	return ret;
}

int main(){
	
	
	cin >> N >> M >> R;
	for(int i=0;i<R;i++){
		cin >> r[i];
		r[i]--;
	}
	for(int i=0;i<nmax;i++){
		for(int j=0;j<nmax;j++){
			if(i==j){
				dist[i][j] = 0;
			}else{
				dist[i][j] = INF;
			}
		}
	}
	for(int i=0;i<8;i++){
		checked[i] = false;
	}
	
	int A,B,C;
	for(int i=0;i<M;i++){
		cin >> A >> B >> C;
		A--;
		B--;
		nodes[A].to.push_back(B);
		nodes[A].cost.push_back(C);
		nodes[B].to.push_back(A);
		nodes[B].cost.push_back(C);
	}
	
	for(int i=0;i<R;i++){
		checked[i] = true;
		kumiawase(i,0);
		checked[i] = false;
		for(int j=0;j<R;j++){
			patern[j] = -1;
		}
	}
	
	cout << Ans << endl;
	
	return 0;
}
