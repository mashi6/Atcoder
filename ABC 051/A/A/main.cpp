
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	for(int i=0;i<19;i++){
		if(input[i]==','){
			cout << " ";
		}else{
			cout << input[i];
		}
	}
	cout << endl;
	return 0;
}
