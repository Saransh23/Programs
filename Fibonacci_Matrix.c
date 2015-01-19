/*Fibonacci Series using Matrix*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i ;
	int A[2][2] = {{1,0},{0,1}}  , B[2][2] , C[2][2] = {1,1,1,0}  ;
	printf("Enter number of terms : ") ;
	scanf("%d" ,&n) ;
	for(i=0 ; i<n ; i++)
	{
		printf("\n%d" , A[0][1]) ;
		B[0][0] = A[0][0]*C[0][0] + A[0][1]*C[1][0]  ;
		B[0][1] = A[0][0]*C[0][1] + A[0][1]*C[1][1]  ;
		B[1][0] = A[1][0]*C[0][1] + A[1][1]*C[1][1]  ;
		B[1][1] = A[1][0]*C[1][0] + A[1][1]*C[1][1]  ;
		A[0][1] = B[0][1] ;
		A[0][0] = B[0][0] ;
		A[1][0] = B[1][0] ;
		A[1][1] = B[1][1] ;
	}
	getch() ;
	return 0;
	
}
