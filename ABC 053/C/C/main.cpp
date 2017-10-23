
#include <iostream>
using namespace std;


int main(){
	long long input,answer;
	int amari;
	cin >> input;
	answer=input/11*2;
	amari = input%11;
	
	if (amari == 0){
	}else if (amari > 6){
		answer+=2;
	}else{
		answer+=1;
	}
	cout << answer << endl;
	return 0;
}
