/*Sorting by Selection Sort*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j , pos , min ;
	printf("Enter a number : ") ;
	scanf("%d",&n) ;
	int A[n] ;
	for(i=0 ; i<n; i++)
	scanf("%d",&A[i]) ;
	for(i=0 ; i < n-1 ; i++)
	{
		min = A[i] ,pos =-1 ;
		for(j=i+1 ; j<n ; j++)
		{
			if(A[j] < min)
			{
				min = A[j] ;
				pos= j ;
		}	}
		if(min<A[i])
		{
			
		A[pos] = A[i] ;
		A[i]=min ;	
	
		}
	}
	for(i=0 ;i<n ; i++)
	printf("\n%d\t",A[i]) ;
	getch() ;
	return 0;
	
}
