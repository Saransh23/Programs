/*Program to print a factorial by recursive technique*/
#include<stdio.h>
#include<conio.h>
int factorial(int num);
int main()
{
	printf("Enter a number: ") ;
	int num, i, fact =1 ;
	scanf("%d" , &num) ;
	fact = factorial(num) ;
	printf("\nFactorial = %d" , fact) ;
	getch();
	return 0 ;
	
}
int factorial(int num)
{
	if(num ==1) return 1 ;
	return num * factorial(num-1) ;
}
