
#include <iostream>
using namespace std;


int main(){
	int N;
	int array[100010]={};
	int input=0;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> input;
		array[input-1]++;
		array[input]++;
		array[input+1]++;
	}
	
	int answer=0;
	for(int i=0;i<100001;i++){
		answer = max(answer,array[i]);
	}
	
	cout << answer << endl;
	
	return 0;
}
