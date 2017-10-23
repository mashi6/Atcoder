
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	long long H,W,N;
	cin >> H >> W >> N;
	int a,b;
	long long black[10]={};
	vector<pair<int,int>> vec;
	for(int i=0;i<N;i++){
		cin >> a >> b;
		for(int j=a;j>a-3;j--){
			for(int k=b;k>b-3;k--){
				if(j<=0 || k<=0)continue;
				if(j>=H-1 || k>=W-1)continue;
				vec.push_back(make_pair(j,k));
			}
		}
	}
	
	sort(vec.begin(),vec.end());
	
	if(N != 0){
	int first = vec[0].first,second = vec[0].second;
	int count = 1;
	for(int i=1;i<vec.size();i++){
		if(first == vec[i].first && second == vec[i].second){
			count++;
		}else{
			black[count]++;
			
			first = vec[i].first;
			second = vec[i].second;
			count = 1;
		}
	}
	black[count]++;
	}
	
	long long allBlack=0;
	for(int i=0;i<10;i++){
		allBlack += black[i];
	}
	black[0] = (H-2)*(W-2) - allBlack;
	
	for(int i=0;i<10;i++){
		cout << black[i] << endl;
	}
	
	return 0;
}
