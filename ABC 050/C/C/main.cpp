
#include <iostream>
using namespace std;


int main(){
	int N;
	int count[100010];
	
	for(int i=0;i<100010;i++){
		count[i] = 0;//0回出てきた
	}
	
	cin >> N;
	int input;
	for(int i=0;i<N;i++){
		cin >> input;
		count[input]++ ;
	}
	
	if(N%2 == 0){//偶数
		for(int i=1;i<N;i=i+2){
			if(count[i]>=3){
				cout << 0 << endl;
				return 0;
			}
		}
	}else{
		for(int i=0;i<N;i=i+2){
			if(i==0){
				if(count[i]>=2){
					cout << 0<< endl;
					return 0;
				}
			}else{
				if(count[i]>=3){
					cout << 0 << endl;
					return 0;
				}
			}
		}
	}
	
	long long answer = 1;
	for(int i=1;i<=N/2;i++){
		answer = answer * 2 % 1000000007;
	}
	
	cout << answer << endl;
	//偶数の場合は、同じのが3個でてきたらアウト
	//奇数の場合は、同じのが3個もしくは0が2個出てきたらアウト
	
	return 0;
}
