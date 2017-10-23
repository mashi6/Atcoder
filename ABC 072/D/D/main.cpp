
#include <iostream>
using namespace std;


int main(){
	int N;
	int array[100010]={};
//	bool check[100010]={};
	int answer=0;
	
	cin >> N;
	
	for(int i=1;i<=N;i++){
		cin >> array[i];
	}
	
	for(int i=1;i<=N-1;i++){
		if(array[i]==i){
			int memo=array[i];
			array[i]=array[i+1];
			array[i+1]=memo;
			answer++;
		}
	}
	
	if(array[N]==N){
		answer++;
	}

	cout << answer << endl;
	return 0;
}
