
#include <iostream>
using namespace std;
using ll = long long;

ll min(ll x,ll y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int N;
	ll array[100010]={};
	ll wa[100010]={};
	
	
	cin >> N;
	for(int i=1;i<=N;i++){
		cin >> array[i];
	}
	wa[1]=array[1];
	//奇数がマイナス
	
	
	ll answer=0;
	for(int i=1;i<=N;i++){
		if(i%2!=0){//奇数
			if(wa[i]>=0){
				answer+=wa[i]+1;
				wa[i]=-1;
			}
			wa[i+1]=array[i+1]+wa[i];
		}else{
			if(wa[i]<=0){
				answer+=abs(wa[i])+1;
				wa[i]=1;
			}
			wa[i+1]=array[i+1]+wa[i];
		}
	}
	
	for(int i=0;i<100010;i++){
		wa[i]=0;
	}
	wa[1]=array[1];
	
	ll answer_2=0;
	for(int i=1;i<=N;i++){
		if(i%2==0){//偶数
			if(wa[i]>=0){
				answer_2+=wa[i]+1;
				wa[i]=-1;
			}
			wa[i+1]=array[i+1]+wa[i];
		}else{
			if(wa[i]<=0){
				answer_2+=abs(wa[i])+1;
				wa[i]=1;
			}
			wa[i+1]=array[i+1]+wa[i];
		}
	}
	
	cout << min(answer,answer_2) << endl;
	
	return 0;
}
