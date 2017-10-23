//
//  main.cpp
//  ABC #068-C
//
//  Created on 2017/08/13.
#include <iostream>
using namespace std;

int main(){
	int N,M;
	bool check[200001]={false};
	cin >> N >> M;
	//島1<->島N　の船があるかどうか調べる。
	
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b;
		if(a==1){
			if(check[b]==true){
				cout << "POSSIBLE" << endl;
				return 0;
			}else{
				check[b] = true;
			}
		}else if(b==N){
			if(check[a]==true){
				cout << "POSSIBLE" << endl;
				return 0;
			}else{
				check[a] = true;
			}
		}
	}
	cout << "IMPOSSIBLE" << endl;
	
	return 0;
}
