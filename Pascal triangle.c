#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j;
	int A[]={1,0,0,0,0,0,0,0,0,0} ;
	for(i=1 ; i<=12 ; i++)
	{
		for(j=0 ; j< i ; j++ )
		printf("%d ", A[j] ) ;
		printf("\n") ;
		for(j=i ; j >0 ; j--)
		A[j] = A[j] + A[j-1] ;
		
	}
	getch() ;
	return 0 ;
}
