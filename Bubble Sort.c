/*Bubble Sort*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j , temp ;
	printf("Enter a number : ") ;
	scanf("%d",&n) ;
	int A[n] ;
	for(i=0 ; i<n; i++)
	scanf("%d",&A[i]) ;
	for(i=0 ; i < n-1 ; i++)
	{
		for(j=0 ; j<n-i-1 ; j++)
		{
			if(A[j+1] < A[j])
			{
				temp  = A[j] ;
				A[j] = A[j+1] ;
				A[j+1] = temp ;
				
		}	}
		}
	for(i=0 ;i<n ; i++)
	printf("\n%d\t",A[i]) ;
	getch() ;
	return 0;
	
}
