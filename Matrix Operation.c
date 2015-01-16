/*Matrix Operation*/
#include<stdio.h>
#include<conio.h>
void Add(int i1,int j1,int i2, int j2)
{
	int A[i1][j1] , B[i2][j2] , C[i1][j1] ;
	if((i1 != 12)|| (j1 != j2))
	{
		printf("\nError... Matrix not compatible") ;
		return;
	}
	int i, j ;
	for(i = 0 ; i<i1 ; i ++)
	for(j = 0 ; j<j1; j++)
	scanf("%d",&A[i][j]);
	for(i = 0 ; i<i2 ; i ++)
	for(j = 0 ; j<j2; j++)
	{
		scanf("%d",&B[i][j]);
		C[i][j] = A[i][j] + B[i][j] ;	
	}
	for(i = 0 ; i<i1 ; i ++)
	{
		for(j = 0 ; j<j1; j++)
		printf("%d\t",C[i][j]);
		printf("\n") ;
	}
}
void Sub(int i1,int j1,int i2, int j2)
{
	int i, j ;
	int A[i1][j1] , B[i2][j2] , C[i1][j1] ;
	if((i1 != i2)|| (j1 != j2))
	{
		printf("\nError... Matrix not compatible") ;
		return ;
	}
	for(i = 0 ; i<i1 ; i ++)
	for(j = 0 ; j<j1; j++)
	scanf("%d",&A[i][j]);
	for(i = 0 ; i<i2 ; i ++)
	for(j = 0 ; j<j2; j++)
	{
		scanf("%d",&B[i][j]);
		C[i][j] = A[i][j] - B[i][j] ;	
	}
	for(i = 0 ; i<i1 ; i ++)
	{
		for(j = 0 ; j<j1; j++)
		printf("%d\t",C[i][j]);
		printf("\n") ;
	}
}
void Mult(int i1,int j1,int i2, int j2)
{
	int A[i1][j1] , B[i2][j2] , C[i1][j2] ;
	int i, j,l ,k ;
	if(j1 != i2)
	{
		printf("\nError... Matrix not compatible") ;
		return ;;
	}
	for(i = 0 ; i<i1 ; i ++)
	for(j = 0 ; j<j1; j++)
	scanf("%d",&A[i][j]);
	for(i = 0 ; i<i2 ; i ++)
	for(j = 0 ; j<j2; j++)
	{
		scanf("%d",&B[i][j]);
		C[i][j] = 0;
		for(l=0 , k=0 ; l<j1 ;l++,k++)
		{
			C[i][j] += A[i][l] * B[k][j] ;
		}
	}
	for(i = 0 ; i<i1 ; i ++)
	{
		for(j = 0 ; j<j1; j++)
		printf("%d\t",C[i][j]);
		printf("\n") ;
	}
}
int main()
{
	
	int choice, i1,j1,i2,j2 ;
	while(1) 
	{
		printf("----Menu----\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
     	printf("4. Exit\n") ;
   		printf("Enter your choice : ");
   		scanf("%d" , &choice) ;
   		if(choice == 4) return ;
   		printf("\n Enter dimensions of the two matrix : ");
   		scanf("%d%d%d%d",&i1,&j1,&i2,&j2) ;
   		switch(choice)
   		{
   			case 1: Add(i1,j1,i2,j2) ;
   					break ;
   			case 2: Sub(i1,j1,i2,j2) ;
   					break ;
   			case 3: Mult(i1,j1,i2,j2) ;
   					break ;
   		    
   			default: printf("\nWrong choice\n") ;
   		   }
   			
		}
	getch() ;
	return 0 ;
}
	

