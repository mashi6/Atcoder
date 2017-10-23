
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector <int>array;
	int answer=0;
	int n;
	int input;
	cin >> n;
	for(int i= 0;i<n;i++){
		cin >> input;
		array.push_back(input);
	}
	sort(array.begin(),array.end());
	
	int before = -1;
	for(int i=0;i<n;i++){
		if(before == array[i]){
//			i++;
			before = -1;
			answer--;
		}else{
			before = array[i];
			answer++;
		}
//		before = array[i];
	}
	
	cout << answer << endl;
	return 0;
}
