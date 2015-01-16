/*Printing Fibonacci Series recursively*/
#include<stdio.h>
#include<conio.h>
int Fib(int n)
{
	if(n == 0) return 0;
	if(n==1) return 1 ;
	return Fib(n-1) + Fib(n-2) ;
}
int main()
{
	printf("Enter number of values to be printed :") ;
	int n , i ;
	scanf("%d",&n) ;
	for(i= 0 ; i<n ; i++)
	printf("\n%d" , Fib(i));
	getch() ;
	return 0 ;
	
}
