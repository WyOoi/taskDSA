#include <iostream>
using namespace std;

int main(){
	int A[12]={0,1,2,3,4,5,6,7,8,9,10,11};
	int temp1 = 0;
	int temp2 = 0;
	int i=0;
	
	cout << "Before: " << endl;
	for(int i=0;i<12;i++)
		cout << A[i] << endl;
		
	for(i=0;i<9;i=i+4){
		temp1=A[i];
		temp2=A[i+1];
		A[i]=A[i+2];
		A[i+1]=A[i+3];
		A[i+2]=temp1;
		A[i+3]=temp2;
	}
	
	cout << "After: " << endl;	
	for(int i=0;i<12;i++)
		cout << A[i] << endl;

	return 0;
}
