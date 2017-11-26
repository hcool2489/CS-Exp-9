#include<stdio.h>
void main()
{
	int arr[10],odd[10],even[10],i,j=0,k=0;
	printf("Enter 10 elements: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("\nODD array is: ");
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	printf("\nEVEN array is: ");
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n\n");
}
