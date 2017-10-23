
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	for(int i=0;i<input.size()-8;i++){
		cout << input[i] ;
	}
	cout << endl;
	return 0;
}
