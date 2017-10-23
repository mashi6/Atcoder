
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	char memo = {};
	int count = 0;
	for(int i=0;i<input.size();i++){
		if(memo != input[i]){
			count++;
			memo= input[i];
		}
	}
	cout << count-1 << endl;
	return 0;
}
