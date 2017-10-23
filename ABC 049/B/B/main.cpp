
#include <iostream>
using namespace std;


int main(){
	string picture[100];
	int H,W;
	cin >> H >> W;
	
	for(int i=0;i<H;i++){
		cin >> picture[i];
	}
	for(int i=0;i<H;i++){
		cout << picture[i] << endl << picture[i] << endl;
	}
	
	return 0;
}
