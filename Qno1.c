/*program that uses pointers to copy an array of double*/

#include<stdio.h>

int main(void)
{
    int i,n;
	
	printf("Enter the no of element of array:");
	scanf("%d",&n);
	double a[n];
	double *p[n];
	
	for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
			p[i]=a+i;
		}
	for(i=0;i<n;i++)
		{
			printf("%d\t",*p[i]);
		}	

		return 0;
}		
