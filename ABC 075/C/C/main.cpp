
#include <iostream>
#include <vector>
using namespace std;

int N,M;
bool matrix[50][50];
bool checked[50]={};

void dfs(int n){
	checked[n] = true;
	for(int i=0;i<N;i++){
		if(matrix[n][i]==false)continue;
		if(checked[i])continue;
		dfs(i);
	}
}

int main(){
	int a[50],b[50];
	cin >> N >> M;
	for(int i=0;i<M;i++){
//		int a,b;
		cin >> a[i] >> b[i];
		a[i]--;b[i]--;
		matrix[a[i]][b[i]] = true;
		matrix[b[i]][a[i]] = true;
	}
	int answer = 0;
	for(int i=0;i<M;i++){
		matrix[a[i]][b[i]] = false;
		matrix[b[i]][a[i]] = false;
		
		for(int j=0;j<N;j++)checked[j] = false;
		dfs(0);
		
		bool isbridge = false;
		for(int j=0;j<N;j++){
			if(checked[j] == false){
				isbridge = true;
			}
		}
		if(isbridge)answer++;
		
		matrix[a[i]][b[i]] = matrix[b[i]][a[i]] = true;
	}
	cout << answer << endl;
	
	return 0;
}
