
#include <iostream>
using namespace std;

int main(){
	long long a,b,x,c;
	cin >> a >> b >> x;
	
	if(a%x==0){
		c=1;
	}else{
		c=0;
	}
	cout << b/x - a/x +c<< endl;
//	cout << waru(b,x) - (a-1)/x << endl;
	return 0;
}
