
#include <iostream>
using namespace std;


int main(){
	long long X,t;
	cin >> X >> t;
	
	long long answer = X-t;
	if(answer<0){
		cout << "0" << endl;
	}else{
		cout <<answer << endl;
	}
	return 0;
}
