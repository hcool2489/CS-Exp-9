#include<stdio.h>
void main()
{
	int i,arr[10];
	printf("Enter Array 2(10 elements):\n");
	//entering elements in Array
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing Array in reverse order
	printf("\nArray in Reverse order:\n");
	for(i=9;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
