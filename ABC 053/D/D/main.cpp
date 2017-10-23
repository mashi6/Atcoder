
#include <iostream>
using namespace std;


int main(){
	int N;
	int array[100010];
	bool check[100010];
	int kind=0;
	cin >> N;
	for(int i=0;i<100010;i++){
		check[i] = true;
	}
	for(int i=0;i<N;i++){
		cin >> array[i];
		if(check[array[i]]){
			kind++;
			check[array[i]]=false;
		}
	}
	if(kind%2==1){
		cout << kind << endl;
	}else{
		cout << kind - 1 << endl;
	}
	
	return 0;
}
