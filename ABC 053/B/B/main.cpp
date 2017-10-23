
#include <iostream>
using namespace std;


int main(){
	string input;
	int A=10000000,Z=-1;
	
	cin >> input;
	for(int i=0;i<input.size();i++){
		if(input[i]=='A'){
			A = min(A,i);
		}
		if(input[i] == 'Z'){
			Z = max(Z,i);
		}
	}
	cout << Z - A + 1 << endl;
	return 0;
}
