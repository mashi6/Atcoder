
#include <iostream>
using namespace std;
int Count[27]={};
string str;

bool check(){
	bool check=true;
	for(int i=0;i<27;i++){
		if(Count[i] % 2 != 0){
			if(check){
				check = false;
			}else{
				return false;
			}
		}
	}
	return true;
}

void countset(){
	for(int i=0;i<27;i++){
		Count[i] = 0;
	}
	
	for(int i=0;i<str.size();i++){
		Count[str[i] - 'a']++;
	}
}

int main(){
	
	
	cin >> str;
	string STR = str;
	
	countset();
	int answer1=0;
	while(1){
		string strcopy={};
		for(int i=0;i<str.size();i++){
			if(check()){
				answer1 ++;
				break;
			}else{
				Count[str[i] - 'a'] --;
				strcopy+=str[i];
			}
		}
		str = strcopy;
		if(str.size() == 0){
			break;
		}
		countset();
	}
	
	str = STR;
	
	countset();
	int answer2=0;
	while(1){
		string strcopy={};
		for(int i=0;i<str.size();i++){
			if(check()){
				answer2++;
				break;
			}else{
				Count[str[str.size() - i - 1] - 'a'] --;
				strcopy += str[str.size() - i - 1];
			}
		}
		str = strcopy;
		if(str.size() == 0){
			break;
		}
		countset();
	}
	
	cout << min(answer1,answer2) << endl;
	
	return 0;
}
