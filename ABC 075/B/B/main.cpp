
#include <iostream>
using namespace std;


int main(){
	char matrix[52][52];
	int Matrix[52][52];
	int H,W;
	cin >> H >> W;
	for(int i=0;i<51;i++){
		for(int j=0;j<51;j++){
			Matrix[i][j] = 0;
		}
	}
	for(int i=1;i<=H;i++){
		for(int j=1;j<=W;j++){
			cin >> matrix[i][j];
			if(matrix[i][j] != '#')continue;
			Matrix[i-1][j]++;
			Matrix[i][j-1]++;
			Matrix[i+1][j]++;
			Matrix[i][j+1]++;
			Matrix[i+1][j+1]++;
			Matrix[i-1][j-1]++;
			Matrix[i+1][j-1]++;
			Matrix[i-1][j+1]++;
		}
	}
	for(int i=1;i<=H;i++){
		for(int j=1;j<=W;j++){
			if(matrix[i][j] == '#'){
				cout << "#";
			}else{
				cout << Matrix[i][j];
			}
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
