
#include <iostream>
using namespace std;


int main(){
	int N;
	cin >> N;
	int a[100010],b[100010];
	int Min= 0;
	int B;
	for(int i=0;i<N;i++){
		cin >> a[i] >> b[i];
		Min = max(a[i],Min);
		if(Min == a[i]){
			B = b[i];
		}
	}
	
	cout << Min + B << endl;
	return 0;
}
