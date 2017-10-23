
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	int N,A;
	int x[51];
	cin >> N >> A;
	for(int i=0;i<N;i++){
		cin >> x[i] ;
	}
	
	int dp[51][51][2501] = {};// j枚の中から i枚選んだ時の 合計s
	
	for(int i=0;i<51;i++){
		for(int j=0;j<51;j++){
			for(int k=0;k<2501;k++){
				dp[i][j][k] = 0;
			}
		}
	}
	
	dp[0][0][0] = 1;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			for(int k=0;k<2501;k++){
				if(dp[i][j][k] > 0){
					dp[i+1][j][k] += dp[i][j][k];// j枚目を選ばない場合
					dp[i+1][j+1][k+x[i]] += dp[i][j][k];// j枚目を選ぶ場合 合計にx[j]を足す。
				}
			}
		}
	}
	
	ll answer = 0;
	for(int i=1;i<N+1;i++){
		answer += dp[N][i][i*A];
	}
	cout << answer << endl;
	
	return 0;
}
