
#include <iostream>
using namespace std;


int main(){
	string a,b;
	cin >> a >> b;
	for(int i=0;i<a.size()-1;i++){
		cout << a[i];
		cout << b[i];
		
	}
	cout << a[a.size()-1];
	if(b.size()==a.size()){
		cout << b[b.size()-1] ;
	}
	cout << endl;
	return 0;
}
