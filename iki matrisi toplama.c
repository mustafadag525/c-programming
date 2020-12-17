#include<stdio.h>
#include<stdlib.h>
int main(){
	int A[] ={1,5,8,9,10,12};
	int B[] ={2,4,7,11};
	int A_uzunluk =sizeof(A)/sizeof(A[0]);
	int B_uzunluk =sizeof(B)/sizeof(B[0]);
	int C_uzunluk =A_uzunluk+B_uzunluk;
	int C[C_uzunluk];
	int i,ai=0,bi=0,j;
	for(i = 0;i<A_uzunluk+B_uzunluk;i++){
		if(A_uzunluk<=ai){
			C[i] =B[bi];
			bi++;
		}
		else if(B_uzunluk<=bi){
			C[i] =A[ai];
			ai++;
		}
		
		else{
			if(A[ai]<B[bi]){
				C[i] = A[ai];
				ai++;
			}
			else{
				C[i] = B[bi];
				bi++;
			}
			
		}
	}
	for(j=0;j<A_uzunluk+B_uzunluk;j++){
		printf("%d\t",C[j]);
	}
	return 1;
	
}