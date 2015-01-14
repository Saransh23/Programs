#include<stdio.h>
int main()
{
	int a[10] ;
	int i,j,k,c ;
	for(i=0 ; i<10 ; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Null Set \n") ;
	for(i=1; i <= 10; i++)
	{
		c=0 ;
		for(j=0;j< 10 -10%i ;j++)
		{
			printf("%d ", a[c]);
			if(++c % i == 0) printf("\n") ;
		}
		
	}
	
	return 0 ;
}
