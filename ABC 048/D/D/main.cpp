// kotae maru utsushi
#include <iostream>
using namespace std;


int main(){
	string s;
	cin >> s;
	if(s.size()%2 == 0){
		if(s[0] == s[s.size()-1]){
			cout << "First" << endl;
		}else{
			cout << "Second" << endl;
		}
	}else{
		if(s[0] == s[s.size()-1]){
			cout << "Second" << endl;
		}else{
			cout << "First" << endl;
		}
	}
	return 0;
}
