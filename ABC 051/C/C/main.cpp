
#include <iostream>
using namespace std;
string answer = {};

void append(char x,int y){
	for(int i=0;i<y;i++){
		answer += x;
	}
}

int main(){
	int sx,sy,tx,ty;
	cin >> sx >> sy >> tx >> ty;
	append('U',abs(ty-sy));
	append('R',abs(tx-sx));
	
	append('D',abs(ty-sy));
	append('L',abs(tx-sx));
	
	append('L',1);
	append('U',abs(ty-sy)+1);
	append('R',abs(tx-sx)+1);
	append('D',1);
	
	append('R',1);
	append('D',abs(ty-sy)+1);
	append('L',abs(tx-sx)+1);
	append('U',1);
	
	cout << answer << endl;
	
	return 0;
}
