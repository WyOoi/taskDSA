#include <iostream>
using namespace std;

int main(){
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int B[10]={10,11,12,13,14,15,16,17,18,19};
	int temp1 = 0;
	int temp2 = 0;
	int i=0;
	
	cout << "Before: " << endl;
	for(int i=0;i<10;i++)
		cout << A[i] << "\t" << B[i] << endl;
		
	temp1=A[0];
	temp2=B[0];
	for(i=0;i<9;i++){
		A[i]=A[i+1];
		B[i]=B[i+1];
	}
	A[9]=temp2;
	B[9]=temp1;
	
	cout << "After: " << endl;	
	for(int i=0;i<10;i++)
		cout << A[i] << "\t" << B[i] << endl;

	return 0;
}
