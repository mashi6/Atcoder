
#include <iostream>
using namespace std;

int main(){
	string input;
	cin >> input;
	int wins = 0;
	int loses = 0;
	for(int i=0;i<input.size();i++){
		if(i % 2 == 0){
			if(input[i] == 'p'){
				loses ++;
			}
		}else{
			if(input[i] == 'g'){
				wins++;
			}
		}
	}
	
	cout << wins - loses << endl;
	return 0;
}
