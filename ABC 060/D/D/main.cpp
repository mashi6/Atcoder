
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll max(ll x,ll y){
	if(x>y){
	return x;
	}else{
		return y;
	}
}

int main(){
	ll N,W;
	vector<ll>v_1,v_2,v_3,v_4;
	ll W_1;
	cin >> N >> W;
	ll input;
	
	cin >> W_1 >> input;
	
	v_1.push_back(input);
	
	for(int i=2;i<=N;i++){
		cin >> input;
		switch (input-W_1){
			case 0:
				cin >> input;
				v_1.push_back(input);
				break;
			case 1:
				cin >> input;
				v_2.push_back(input);
				break;
			case 2:
				cin >> input;
				v_3.push_back(input);
				break;
			case 3:
				cin >> input;
				v_4.push_back(input);
				break;
			default:
				cout << "Unexpected error" << endl;
				return 0;
		}
	}
	
	sort(v_1.begin(),v_1.end(),greater<int>());
	sort(v_2.begin(),v_2.end(),greater<int>());
	sort(v_3.begin(),v_3.end(),greater<int>());
	sort(v_4.begin(),v_4.end(),greater<int>());
	
	ll weight=0,value=0,answer=0;
	
	for(int i=0;i<=v_1.size();i++){
		for(int j=0;j<=v_2.size();j++){
			for(int k=0;k<=v_3.size();k++){
				for(int l=0;l<=v_4.size();l++){
					weight=(W_1+0)*i+(W_1+1)*j+(W_1+2)*k+(W_1+3)*l;
					if(weight<=W){
						value=0;
						for(int m=0;m<i;m++){
							value+=v_1[m];
						}
						for(int m=0;m<j;m++){
							value+=v_2[m];
						}
						for(int m=0;m<k;m++){
							value+=v_3[m];
						}
						for(int m=0;m<l;m++){
							value+=v_4[m];
						}
						
						answer=max(answer,value);
					}
				}
			}
		}
	}
	
	cout << answer << endl;
	
	return 0;
}
