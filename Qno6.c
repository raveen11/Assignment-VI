/*PROGRAM: To pass an array of n pointer to floats and returns a newly created array that contains those n float values using function */


#include<stdio.h>
int main ()
{
	int *a[10],*b[10];
	int i,m;
	printf("Enter the limit of the array : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Enter the element [%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore array : \n");
	for(i=0;i<m;i++)
	{									        
		printf("a[%d]=%d\n",i,a[i]); 
	}
	for(i=0;i<m;i++)
	{
		b[i]=a[i];
	}									  
	printf("\n\nAfter array : \n");
	for(i=0;i<m;i++)
	{
		printf("b[%d]=%d\n",i,b[i]);
	}
	return 0;
}
