
#include <iostream>
using namespace std;


int main(){
	string s;
//	int how[27]={};
	cin >> s;
	
	int answer = 0;
	int I=0,J=s.size()-1;
	while(1) {
		if(s[I] == s[J]){
			I++;
			J--;
		}else if(s[I] == 'x'){
			answer++;
			I++;
		}else if(s[J] == 'x'){
			answer ++;
			J--;
		}else if(s[I] != s[J]){
			cout << "-1" << endl;
			return 0;
		}
		if(I>=J){break;}
	}
	cout << answer << endl;
	/*
	
	
	
	
	for(int i=0;i<s.size();i++){
		if(s[i] != 'x'){
			how[s[i] - 'a']++;
		}
	}
	bool c = false;
	for(int i=0;i<=26;i++){
		if(how[i]%2 != 0){
			c= true;
			break;
		}
	}
	
	string str={};
	for(int i=0;i<s.size();i++){
		if(s[i] != 'x'){
			str += s[i];
		}
	}
	
	for(int i=0;i<str.size()/2;i++){
		if(str[i] != str[str.size()-i-1]){
			cout << "-1" << endl;
			return 0;
		}
	}
	
	char mannnaka = str[str.size()/2];
	int nannkaidetekuru=0;
	for(int i=0;i<str.size()/2;i++){
		if(str[i] == mannnaka){
			nannkaidetekuru ++;
		}
	}
	int I=0,J=0;
	for(int i=0;i<s.size();i++){
		if(s[i] == mannnaka){
			if(nannkaidetekuru != 0){
				nannkaidetekuru --;
			}else{
				I = J = i;
				break;
			}
		}
	}
	int answer = 0;
//	I--;
//	J++;
	
	if(c){
		int i=1;
		while(1){
			if(s[I+i] == mannnaka){
				J = I+i;
				break;
			}
		}
	}
	while(1){
		I--;
		J++;
		if(s[I] == s[J]){
		}else if(s[I] == 'x'){
			answer ++;
			J--;
		}else if(s[J] == 'x'){
			answer ++;
			I++;
		}
		if(I<0 || J>=s.size()){break;}
	}
	
	answer += (I+1);
	answer += (s.size()-J-1);
	
	cout << answer << endl;
	*/
	return 0;
}
