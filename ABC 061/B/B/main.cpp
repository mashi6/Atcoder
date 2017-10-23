#include <iostream>
using namespace std;


int main(){
	int array[100]={};
	int N,M;
	int input;
	cin >> N >> M;
	for(int i=0;i<M;i++){
		cin >> input;
		array[input]++;
		cin >> input;
		array[input]++;
	}
	for(int i=1;i<=N;i++){
		cout << array[i] << endl;
	}
	return 0;
}
