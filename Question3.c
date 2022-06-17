#include<stdio.h>
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0, Product = 1 ;
 	printf("Please Enter Number of rows and columns  :  \n");
 	scanf("%d %d", &i, &j);
 
 	printf("Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++){
   		for(columns = 0;columns < j;columns++){
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++){
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("The Sum of Diagonal Elements of Matrix =  %d\n", Sum );

     for(rows = 0; rows < i; rows++){
         Product = Product * a[rows][rows];
     }

     printf("The Product of Diagonal Elements of Matrix = %d", Product );

 	return 0;
}