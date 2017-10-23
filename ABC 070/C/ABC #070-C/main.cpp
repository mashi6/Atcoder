//
//  main.cpp
//  ABC #070-C
//
//  Created on 2017/08/12.


#include <iostream>
using namespace std;

using lli = long long int;

lli gcd(lli s,lli t)
{
	if(t==0)return s;
	return gcd(t,s%t);
}

lli lcm(lli p,lli q)
{
	return 	p/gcd(p,q)*q;
}


int main(){
	int N;
	cin >> N;
	lli input = 0;
	lli answer = 1;
	for(int i=0;i<N;i++){
		cin >> input;
		answer = lcm(answer,input);
	}
	
	cout << answer << endl;

	return 0;
}
