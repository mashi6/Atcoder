
#include <iostream>
using namespace std;


int main(){
	string input;
	int N,x = 0,answer = -1;
	cin >> N >> input;
	for(int i=0;i<N;i++){
		answer = max(answer,x);
		if(input[i] == 'I'){
			x++;
		}else if(input[i] == 'D'){
			x--;
		}
		answer = max(answer,x);
	}
	cout << answer << endl;
	
	return 0;
}
