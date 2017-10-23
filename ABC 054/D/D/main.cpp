
#include <iostream>
using namespace std;
const int INF = 10000000;

int main(){
	int N,Ma,Mb;
	int a[41],b[41],c[41];
	int dp[41][411][411];
	
	for(int i=0;i<41;i++){
		for(int j=0;j<411;j++){
			for(int k=0;k<411;k++){
				dp[i][j][k] = INF;
			}
		}
	}
	dp[0][0][0] = 0;
	
	cin >> N >> Ma >> Mb;
	for(int i=0;i<N;i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	
	for(int i=0;i<N;i++){
		for(int ca=0;ca<=410;ca++){
			for(int cb=0;cb<=410;cb++){
				if(dp[i][ca][cb]==INF)continue;//まだ更新されていない
				dp[i+1][ca][cb] = min(dp[i+1][ca][cb],dp[i][ca][cb]);//i番目の薬品を買わない場合。
				//次の場所(i+1)に、次の場所で必要な金と今の場所で必要な金の最小値を入れる。
				
				dp[i+1][ca+a[i]][cb+b[i]] = min(dp[i+1][ca+a[i]][cb+b[i]],dp[i][ca][cb]+c[i]);//i番目の薬品を買う場合
				//i番目を買うと、Maにa[i]追加　Mbにb[i]追加　　今の場所で必要な金と薬品iの値段(c[i]) との最小値
			}
		}
	}
	
	int answer = INF;
	for(int ca=1;ca<=410;ca++){//比が0対
		for(int cb=1;cb<=410;cb++){//0だとif文が通ってしまう。
			if(ca*Mb == cb*Ma){
				answer = min(answer,dp[N][ca][cb]);//dp後はdp[N](dp[i+1]の終着点)を参照すれば良い
			}
		}
	}
	
	if(answer == INF){//目的の比率にならなかった
		answer = -1;
	}
	cout << answer << endl;
	return 0;
}
