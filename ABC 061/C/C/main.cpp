
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	long long N,K;
	int answer;
	int input;
	
	vector<pair<int,int>> array;
	cin >> N >> K;
	
	int a,b;
	for(int i=0;i<N;i++){
		cin >> a;
		cin >> b;
		array.push_back(make_pair(a,b));
	}
	
	sort(array.begin(),array.end());
	
	for(int i=0;i<N;i++){
		answer = array[i].first;
		input = array[i].second;
		K-=input;
		if(K<=0){
			break;
		}
	}
	cout << answer << endl;
	
	
	return 0;
}
