
#include <iostream>
using namespace std;
const double INF = 10000000;

int A,B,C,D,E,F;
int Count = 1;
double toriurumizu[101];
double toriurusatou[3001];
bool sugarCheck[3001];

void mizu(int water){
	if(water > F){
		return;
	}
	if(Count>99)return;
	toriurumizu[Count] =double( water + 100*A);
	Count++;
	toriurumizu[Count] =double( water + 100*B);
	Count++;
	mizu(water + 100*A);
	mizu(water + 100*B);
	
}

void satou(int sugar){
	if((F/100)*E<sugar){
		return;
	}
	if(Count>2999)return;
	
	if(sugarCheck[sugar + C]){
		
	}else{
		toriurusatou[Count] = double(sugar + C);
		sugarCheck[sugar+C] = true;
		Count++;
		satou(sugar + C);
	}
	
	if(sugarCheck[sugar + D]){
		
	}else{
		toriurusatou[Count] = double(sugar + D);
		sugarCheck[sugar+D] = true;
		Count++;
		satou(sugar + D);
	}
	
	
	
	
}

int main(){//100*A 100*B の水　　C Dの砂糖　100gあたりEの砂糖が溶ける Fg以下で作る
	//作ることのできる砂糖水は？
	cin >> A >> B >> C >> D >> E >> F;
	for(int i=0;i<101;i++){
		toriurumizu[i] = INF;
	}
	for(int i=0;i<3001;i++){
		toriurusatou[i] = INF;
		sugarCheck[i] = false;
	}
	toriurumizu[0] = 0;
	mizu(0);
	
	Count = 1;
	toriurusatou[0] = 0;
	satou(0);
	
	double waterAns=0,sugarAns=0;
	double noudo=-1;
	int I,J;
	
	for(int i=0;i<101;i++){
		for(int j=0;j<3001;j++){
			if((toriurumizu[i]/100.0)*E<(toriurusatou[j]))continue;//とけのこる
			if(toriurumizu[i]+toriurusatou[j]>F)continue;//ビーカーから出る
			if(i==0&&j==0){
				noudo = 0;
				waterAns = toriurumizu[i]+toriurusatou[j];
				sugarAns = toriurusatou[j];
				continue;
			}
			if(noudo < ((toriurusatou[j])*100.0)/(toriurusatou[j]+toriurumizu[i])){
				noudo = (toriurusatou[j]*100.0)/(toriurusatou[j]+toriurumizu[i]);
				waterAns = toriurumizu[i]+toriurusatou[j];
				sugarAns = toriurusatou[j];
				I = i;
				J = j;
			}
		}
	}
	
	if(waterAns==0 && sugarAns==0){
		cout << min(A,B)*100 << " " << 0 << endl;
		return 0;
	}
	cout << waterAns << " " << sugarAns << endl;
	//cout << I << " " << J << endl;
	
	return 0;
}
