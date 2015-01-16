/*Program to print factorial*/
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Enter a number: ") ;
	int num, i  ;
	scanf("%d" , &num ) ;
	int fact = 1;
	for(i=1 ; i<=num ; i++)
	fact *= i ;
	printf("\nFactorial = %d",fact) ;
	getch() ;
	return 0 ;
	
}
