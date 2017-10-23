//
//  main.cpp
//  ABC #062-C
//
//  Created on 2017/08/24.

#include <iostream>
using namespace std;
long long max(long long x,long long y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

long long min(long long x,long long y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int H,W;
	cin >> H >> W;
	long long answer=10000000;
	
	long long A_H=0,B_H,C_H;
	long long A_W,B_W,C_W;
	long long S_A,S_B,S_C;
	while(true){
		A_H++;
		B_H=(H-A_H)/2;
		C_H=(H-A_H)-B_H;
		if(H-A_H==1){
			break;
		}
		S_A=A_H*W;
		S_B=B_H*W;
		S_C=C_H*W;
		answer=min(answer,max(S_A,max(S_B,S_C))-min(S_A,min(S_B,S_C)));
	}
	A_H=0;
	while(true){
		A_H++;
		if(H-A_H==0){
			break;
		}
		B_W=W/2;
		C_W=W-B_W;
		if(B_W<=0||C_W<=0){
			break;
		}
		S_A=A_H*W;
		S_B=(H-A_H)*B_W;
		S_C=(H-A_H)*C_W;
		answer=min(answer,max(S_A,max(S_B,S_C))-min(S_A,min(S_B,S_C)));
	}
	
	int memo=H;
	H=W;
	W=memo;
	A_H=0;
	
	while(true){
		A_H++;
		B_H=(H-A_H)/2;
		C_H=(H-A_H)-B_H;
		if(H-A_H==1){
			break;
		}
		S_A=A_H*W;
		S_B=B_H*W;
		S_C=C_H*W;
		answer=min(answer,max(S_A,max(S_B,S_C))-min(S_A,min(S_B,S_C)));
	}
	A_H=0;
	while(true){
		A_H++;
		if(H-A_H==0){
			break;
		}
		B_W=W/2;
		C_W=W-B_W;
		if(B_W<=0||C_W<=0){
			break;
		}
		S_A=A_H*W;
		S_B=(H-A_H)*B_W;
		S_C=(H-A_H)*C_W;
		answer=min(answer,max(S_A,max(S_B,S_C))-min(S_A,min(S_B,S_C)));
	}

	cout << answer << endl;
	
	return 0;
}
