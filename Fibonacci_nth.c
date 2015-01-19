/*Fibonacci using nth term*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int n , i; double t , x ,num ;
	printf("Enter the number of terms to be printed :" ) ;
	scanf("%d" ,&n) ;
	t = (sqrt(5) +1)/2 ;
	x = sqrt(5) ;
	for(i=0 ; i<n ; i++)
	{
		num= pow(t,i) /x ;
		num = (int)(num*2) %2 == 0 ? floor(num) : ceil(num) ;
		printf("\n%d", (int) num) ;
	}
	getch() ;
	return 0 ;
	
}
