
#include <iostream>
using namespace std;


int main(){
	bool array[101]={};
	int A,B,C;
	cin >> A >> B >> C;
	int count=0;
	
	while(true){
		count++;
		int D=A*count;
		if(D%B==C){
			cout << "YES" << endl;
			break;
		}
		if(array[D%B]){
			cout << "NO" << endl;
			break;
		}
		array[D%B]=true;
	}
	
	return 0;
}
