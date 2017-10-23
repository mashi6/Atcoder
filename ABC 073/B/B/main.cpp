
#include <iostream>
using namespace std;


int main(){
	int N,answer=0;
	int input_1,input_2;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> input_1 >> input_2;
		answer+=(input_2-input_1)+1;
	}
	cout << answer << endl;
	return 0;
}
