//
//  main.cpp
//  ABC #069-B
//
//  Created by 豊岡真知 on 2017/08/11.
//  Copyright © 2017年 豊岡真知. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
	string str;
	char top,bottom;
	cin >> str;
	top = str[0];
	bottom = str[str.size()-1];
	
	cout << top << str.size()-2 << bottom;
	return 0;
}
