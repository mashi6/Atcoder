//
//  main.cpp
//  ABC #066-D
//
//  Created on 2017/08/18.

#include <iostream>
using namespace std;
using lli = long long ;

int n;
int myArray[100010]={0};
double kaijousareta[100010]={0};
lli kaijo[1000010]={1};

int nCr(int n,int r){
	return(kaijo[n]/(kaijo[r]*kaijo[n-r]))%1000000007;
}

void kaijou(){
	for(lli i=1;i<=n+1;i++){
		kaijo[i]=kaijo[i-1] * i % 1000000007;
		cout << "kaijo : " << i << " " << kaijo[i] << endl;
	}
}

lli ruijo(lli a,int x){
	lli answer=1;
	while(x>0){
		if(x%2==0){
			a = a%1000000007;
			x=x/2;
		}else{
			answer = answer*a%1000000007;
			x--;
		}
	}
	return answer;
}

void kaijousare(){
	for(int i=1;i<=n+1;i++){
		kaijousareta[i]=ruijo(kaijo[i],1000000005)%1000000007;
		cout << "kaijousareta : " << i << " " << kaijousareta[i] << endl;
	}
}



int main(){
	int checked[100010]={0};
	int doublePoint_1=1,doublePoint_2=1;
	
	cin >> n;
	for(int i=1;i<=n+1;i++){
		cin >> myArray[i];
		
		if(checked[myArray[i]]){
			doublePoint_1=checked[myArray[i]];
			doublePoint_2=i;
		}else{
			checked[myArray[i]]=i;
		}
	}
	
	kaijou();
//	kaijousare();
	cout << doublePoint_1 << " " << doublePoint_2 << endl;
	for(int i=1;i<=n+1;i++){
		cout << nCr(n+1,i)-nCr((doublePoint_1)+(n-doublePoint_2),i-1) << endl;;
	}

	
	return 0;
}
