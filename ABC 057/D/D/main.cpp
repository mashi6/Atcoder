
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
	int N,A,B;
	double average={};
	ll pascal[55][55]={};
	ll ready[51][51]={};
	ll value[51]={};
	int COUNT[51]={};//value[]がなんかい使われたか
	int valueable[51]={};//元々その種類の荷物は何個あるのか。
	
	for(int i=0;i<51;i++){
		for(int j=0;j<51;j++){
			if(j==0||i==0){
				ready[i][j]=1;
			}else{
				ready[i][j]=ready[i-1][j]+ready[i][j-1];
			}
		}
	}
	
	for(int i=0;i<51;i++){
		for(int j=0;j<51;j++){
			if(i+j<=52){
				pascal[j+i][j]=ready[i][j];
			}
		}
	}
	
	cin >> N >> A >> B;
	for(int i=0;i<N;i++){
		cin >> value[i];
	}
	
	sort(value,value+N,[](const long long& x,const long long& y){return x > y;});
	
	ll memo=0;
	ll count=-1;//count+1個の荷物が選ばれた。
	for(int i=0;i<A;i++){
		average+=double(value[i]);
		if(memo!=value[i]){
			count++;
			memo=value[i];
		}
		COUNT[count]++;//COUNT[]は0~  COUNT[count]は、最終的に入れた荷物と同じ種類の荷物の個数
	}
	average = average/double(A);
	
	printf("%f\n",average);
	
	memo=0;
	ll count_2=-1;//count_2+1個の種類の荷物がある
	for(int i=0;i<51;i++){
		if(memo!=value[i]){
			count_2++;
			memo=value[i];
		}
		valueable[count_2]++;
	}
	
	ll answer=0;

	if(count==0&&A<=valueable[0]){//選んだ荷物が一種類しかなくて、さらにその荷物の数がAより多い
		for(int i=A;i<=min(B,valueable[0]);i++){
			answer+=pascal[valueable[0]][i];
		}
	}else{//最後に選んだ荷物を、その種類の荷物の総数　から　count個選んだときの組み合わせ。
		answer=pascal[valueable[count]][COUNT[count]];
	}

	cout << answer << endl;//A個だけ選ぶ場合。
	
	return 0;
}
