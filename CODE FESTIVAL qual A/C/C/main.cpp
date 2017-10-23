
#include <iostream>
using namespace std;


int main(){
	char matrix[101][101];
	int charCount[26];
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			matrix[i][j] = 'A';
		}
	}
	for(int i=0;i<26;i++){
		charCount[i] = 0;
	}
	int H,W;
	cin >> H >> W;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> matrix[i][j];
			charCount[matrix[i][j]-'a']++;
		}
	}
	bool ikkodake=false;
	if(H%2 == 1 || W%2 == 1){
		ikkodake = true;
	}
	for(int i=0;i<26;i++){//奇数のがあったらダメ
		if(charCount[i]%2==1){
			if(ikkodake){
				ikkodake = false;
				charCount[i]--;
			}else{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	
	int nikoarupea = 0;
	
	nikoarupea = (H/2)*(W%2) + (W/2)*(H%2);
	
	for(int i=0;i<26;i++){
		if((charCount[i]%4)!=0){//二の倍数で四の倍数じゃない数が選別される。
			if(nikoarupea < 0){
				cout << "No" << endl;
				return 0;
			}
			charCount[i] -= 2;
			nikoarupea--;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
