/*Adding two numbers using bit operation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int a, int b) 
{
	int x , y, i ;
	int result = 0 ;
	int CARRY = 0, SUM= 0 ;
	for(i = 0; i <30 ; i++)
	{
		x= a>>i &1 ; y = b>>i &1 ;
		SUM= x^y^CARRY ;
		CARRY= (x&y)|((y|x)&CARRY) ;
		result = result | (SUM<<i)  ;
	}
	printf("\nAnswer = %d", result) ;
}
int main()
{
	int a , b;
	printf("Enter two numbers: ") ;
	scanf("%d %d", &a , &b ) ;
	sum(a,b) ;
	getch() ;
	return 0;
}


