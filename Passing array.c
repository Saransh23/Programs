/*Passing array elements*/
#include<stdio.h>
#include<conio.h>
void pass(int * ,int) ;
int main()
{
	
	int A[8] = {10,20,30,40,50,60,70,80} ;
	int *j = &A[0] ;
	pass(j,8) ;
	getch();
	return 0 ;
}
void pass(int *p_base, int len)
{
	int  i ;
	for(i =0 ; i <len ; i++,p_base++)
	{
		printf("%d " , *p_base) ;
    }
    printf("\b\b\b\b") ;//Testing \b
}
