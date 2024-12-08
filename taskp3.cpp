#include <iostream>
using namespace std;

int main(){
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int B[20]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
	int C[10]={30,31,32,33,34,35,36,37,38,39};
	int D[10]={40,41,42,43,44,45,46,47,48,49};
	int temp1 = 0;
	int temp2 = 0;
	int i=0;
	int j=8;
	
	cout << "Before: " << endl;
	for(i=0;i<20;i++)
		cout << A[i] << "\t" << B[i] << "\t" << C[i] << "\t" << D[i] << endl;
		
	temp1=A[8];
	temp2=B[1];
	for(i=0;i<9;i=i+2){
		A[j]=A[j-2];
		B[i-1]=B[i+1];
		j=j-2;
	}
	A[0]=temp2;
	B[9]=temp1;
	
	for(i=0;i<10;i=i+2){
		temp1=C[i];
		temp2=D[i+1];
		C[i]=B[i+10];
		D[i+1]=B[i+11];
		B[i+10]=temp1;
		B[i+11]=temp2;
	}
	
	cout << "After: " << endl;	
	for(int i=0;i<20;i++)
		cout << A[i] << "\t" << B[i] << "\t" << C[i] << "\t" << D[i] << endl;

	return 0;
}
