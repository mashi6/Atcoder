
#include <iostream>
using namespace std;


int main(){
	int checked[27]={};
	string input;
	cin >> input;
	for(int i=0;i<input.size();i++){
		checked[input[i] - 'a'] ++;
	}
	
	for(int i=0;i<26;i++){
		if(checked[i]%2 != 0){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
