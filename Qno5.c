/*Write a program that uses pointers to copy an array of integer.*/

#include<stdio.h>

int main(void)
	{
		int n,i;
		
		
		printf("Enter the no or ayyar:");
		scanf("%d",&n);
		
		int a[n];
		int *p[n];
		
		for(i=0;i<n;i++)
				{
					scanf("%d\n",a+i);
					p[i]=a+i;
				}
		for(i=0;i<n;i++)
			{
				printf("%d\t",*p[i]);
			}
	return 0;
	}