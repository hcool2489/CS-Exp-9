#include<stdio.h>
void main()
{
	int s,i;
	printf("Enter Size of array: ");
	scanf("%d",&s);
	int arr1[s],arr2[s];
	printf("Enter Array 1:\n");
	//entering arr1
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr1[i]);
	}
	//copying arr1 to arr2
	for(i=0;i<s;i++)
	{
		arr2[i]=arr1[i];
	}
	//printing arr2
	printf("\nArray 2:\n");
	for(i=0;i<s;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
