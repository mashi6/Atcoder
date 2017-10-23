
#include <iostream>
using namespace std;


int main(){
	int K,S;
	cin >> K >> S;
	int answer=0;
	for(int i=0;i<=K;i++){
		for(int j=0;j<=K;j++){
			if(S-(j+i)>=0 && K>=S-(j+i)){
				answer++;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
