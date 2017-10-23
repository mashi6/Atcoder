
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	if(input[0] == '9' || input[1] == '9'){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	
	return 0;
}
