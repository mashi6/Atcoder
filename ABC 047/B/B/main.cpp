
#include <iostream>
using namespace std;


int main(){
	int W,H,N;
	bool width[101]={},height[101]={};
	cin >> W >> H >> N;
	for(int i=1;i<=W;i++){
		width[i] = true;
	}
	for(int i=1;i<=H;i++){
		height[i] = true;
	}
	
	int x[101],y[101],a[101];
	
	for(int i=1;i<=N;i++){
		cin >> x[i] >> y[i] >> a[i];
	}
	
	
	
	for(int i=1;i<=N;i++){
		switch(a[i]){
			case 2:
				for(int j=x[i]+1;j<=100;j++){
					width[j] = false;
				}
				break;
			case 1:
				for(int j=1;j<=x[i];j++){
					width[j] = false;
				}
				break;
			case 4:
				for(int j=y[i]+1;j<=100;j++){
					height[j] = false;
				}
				break;
			case 3:
				for(int j=1;j<=y[i];j++){
					height[j] = false;
				}
				break;
		}
	}
	
	int X=0,Y=0;
	for(int i=1;i<=100;i++){
		if(width[i]){
			X++;
		}
		if(height[i]){
			Y++;
		}
	}
	
	cout << X * Y << endl;
	return 0;
}
