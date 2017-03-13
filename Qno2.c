
/*PROGRAM: To pass with an array of n pointers which returns the maximum.*/

#include<stdio.h>
#include<stdlib.h>

int max()
	{
		
	
	int i,n,j,a;
	
	printf("Enter the value of N \n");
    scanf("%d", &n);
	
	int max;    
	int *x;
	x=(int *)malloc(n*sizeof(int));
    
	for (i = 0; i < n; ++i)
        {
		printf("Enter the numbers ");
		scanf("%d", x+i);
		}
   
    for (i = 0; i<n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(x+i) < *(x+j))
            {
                a = *(x+i);
                *(x+i) = *(x+j);
                *(x+j) = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below \n");
    for (i = 0; i < n; ++i)
       { 
		printf("%d\n",*(x+i));
		}
	max=*(x+0);	
	return max;
}	
int main(void)	
	{
		printf("The maximum no is:%d",max());
	}