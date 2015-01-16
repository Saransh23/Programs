/*Sum of n numbers recursively*/
#include<stdio.h>
#include<conio.h>
int Sum(int *p2A , int n)
{
	if(n==0) return 0 ;
	return *p2A + Sum(++p2A,n-1) ;
}
int main()
{
	int n, i , sum = 0 ;
	printf("Enter number of values to be entered : ") ;
	scanf("%d" , &n ) ;
	int A[n] ;
	for( i = 0; i<n ; i++)
	scanf("%d" , &A[i]) ;
	sum = Sum(A, n) ;
	printf("\nSum = %d",sum) ;
	getch() ;
	return 0 ;
}
