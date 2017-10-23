//
//  main.cpp
//  ABC #063-D
//
//  Created on 2017/08/23.

#include <iostream>
#include <vector>
using namespace std;
using ll = long long ;

int A,B,h[100010]={};
int N;


bool judge(int X){
	ll T=0;
	for(int i=0;i<N;i++){
		int a=h[i]-B*X;
		if(a>0){
			if(a%(A-B)!=0){
				T+=a/(A-B)+1;
			}else{
				T+=a/(A-B);
			}
		}
	}
	if(T>X){
		return false;
	}else{
		return true;
	}
}
int main(){
	cin >> N >> A >> B;
	int Max=0;
	for(int i=0;i<N;i++){
		cin >> h[i];
		Max=max(Max,h[i]);
	}
	int top=1,bottom=Max/B;
	int mid=(top+bottom)/2;
	
	while(true){
		mid=(top+bottom)/2;
		if(judge(mid)){
			bottom=mid;
		}else{
			top=mid+1;
		}
		
		if(top==bottom){
			if(top==bottom&&mid==bottom){
				break;
			}
		}else{
			if(abs(top-bottom)==1){
				if(judge(min(top,bottom))){
					mid=min(top,bottom);
				}else{
					mid=max(top,bottom);
				}
				break;
			}
		}
	}
	cout << mid << endl;
	
	return 0;
}
