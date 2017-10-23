
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	if(input.size() < 4){
		cout << "No" << endl;
		return 0;
	}
	
	if(input[0] == 'Y' && input[1] == 'A' && input[2] == 'K' && input[3] == 'I'){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	
	return 0;
}
