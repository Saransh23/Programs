/*Printing Fibonacci Series*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a= 0, b =1, n, i  , c ;
	printf("Enter number of values to be printed: ") ;
	scanf("%d",&n) ;
	for(i=0 ; i<n ; i++)
	{
		printf("\n%d" , a) ;
		c=a+b ;
		a=b;
		b=c ;
	}
	getch() ;
	return 0 ;
	
	
	
}
