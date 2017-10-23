
#include <iostream>
using namespace std;


int main(){
	string input,answer={};
	cin >> input;
	for(int i=0;i<input.size();i++){
		if(i%2==0){
			answer+=input[i];
		}
	}
	
	cout << answer << endl;
	return 0;
}
