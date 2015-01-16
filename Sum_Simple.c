/*Sum of n numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i , sum = 0;
	printf("Number of values to be entered :") ;
	scanf("%d", &n) ;
	int A[n] ;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &A[i]) ;
		sum+=A[i] ;
		
	}
	printf("\nSum = %d", sum) ;
	getch() ;
	return 0 ;
	
	
}
