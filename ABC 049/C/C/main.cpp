
#include <iostream>
using namespace std;


int main(){
	string input;
	cin >> input;
	string memo;
	for(int i=input.size();i>=0;){
		//memo = input;
		if(i == 0)break;
		if(i-7>=0){
		memo = input.substr(i-7,7);
		if(memo == "dreamer"){
			i -= 7;
			continue;
		}
		}
		if(i-6>=0){
		memo = input.substr(i-6,6);
		if(memo == "eraser"){
			i -= 6;
			continue;
		}
		}
		if(i-5>=0){
		memo = input.substr(i-5,5);
		if(memo == "erase"){
			i -= 5;
			continue;
		}
		if(memo == "dream"){
			i -= 5;
			continue;
		}
		
		}
		cout << "NO" << endl;
		return 0;
		
	}
	
	cout << "YES" << endl;
	
	return 0;
}
