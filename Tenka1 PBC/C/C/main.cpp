
#include <iostream>
#include <vector>
using namespace std;


int main(){
	long long int N;
	cin >> N;
	vector <long long> array;
	long long i = 2;
	array.push_back(1);
	array.push_back(2);
	bool damedesu;
	/*
	for(int i=1;i<10000000;i++){
		if((N*i)%(3*i - 1) == 0){
			cout << N << " " << N*i << " " << N*i / (3*i - 1) << endl;
			break;
		}
	}
	*/
	for(int h=1;h<=3500;h++){
		for(int n=1;n<=3500;n++){
			if(N*n*h%(4*h*n - N*h - N*n) == 0){
					cout << h << " " << n << " " << N*n*h%(4*h*n - N*h - N*n) << endl;
					return 0;
			}
		}
		
	}
	return 0;
}
