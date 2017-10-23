
#include <iostream>
using namespace std;


int main(){
	string inputA,inputB,inputC;
	cin >> inputA >> inputB >> inputC;
	string A=inputA,B=inputB,C=inputC;
	for(int i=0;i<inputA.size();i++){
		A[i] = inputA[inputA.size() - 1 - i];
	}
	for(int i=0;i<inputB.size();i++){
		B[i] = inputB[inputB.size() - 1 - i];
	}
	for(int i=0;i<inputC.size();i++){
		C[i] = inputC[inputC.size() - 1 - i];
	}
	
	char nextTurn = 'a';
	while(true){
		switch(nextTurn){
			case 'a':
				if(A.size() == 0){
					cout << "A" << endl;
					return 0;
				}
				nextTurn = A[A.size() - 1];
				A.pop_back();
				break;
			case 'b':
				if(B.size() == 0){
					cout << "B" << endl;
					return 0;
				}
				nextTurn = B[B.size() - 1];
				B.pop_back();
				break;
			case 'c':
				if(C.size() == 0){
					cout << "C" << endl;
					return 0;
				}
				nextTurn = C[C.size() - 1];
				C.pop_back();
				break;
		}
	}
	
	return 0;
}
