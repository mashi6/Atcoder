
#include <iostream>
#include <vector>
using namespace std;

string input;
long long number[11];

struct BOL{
	bool bol[11];
};
vector <BOL> kumi;
BOL Plus;
long long answer=0;

void kumiawase(int i){
	if(i == input.size()-1){
		kumi.push_back(Plus);
	}else{
		Plus.bol[i] = true;
		kumiawase(i+1);
		Plus.bol[i] = false;
		kumiawase(i+1);
	}
}
int main(){
	cin >> input;
	
	for(int i=0;i<input.size();i++){
		number[i] = input[i] - '0';
	}
	
	kumiawase(0);
	long long answer=0;
	for(int i=0;i<kumi.size();i++){
		long long HOGE = 0;
		for(int j=0;j<input.size();j++){
			HOGE += number[j];
			if(!kumi[i].bol[j]){
				answer += HOGE;
				HOGE = 0;
			}else{
				HOGE *= 10;
			}
		}
		answer += HOGE;
	}
	cout << answer << endl;
	return 0;
}
