
#include <iostream>
using namespace std;


int main(){
	bool checked[101]={};
	int a,b,c;
	cin >> a >> b >> c;
	checked[a] = true;
	checked[b] = true;
	checked[c] = true;
	int answer = 0;
	for(int i=1;i<101;i++){
		if(checked[i])answer++;
	}
	cout << answer << endl;
	return 0;
}
