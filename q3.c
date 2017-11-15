#include<stdio.h>
void main()
{
	int i,s,p=0;
	printf("Enter size of array: ");
	scanf("%d",&s);
	int arr[s];
	printf("Enter Array:\t\t** 0 will be considered +ve\n");	
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	//checking array for +ve and -ve nos
	for(i=0;i<s;i++)
	{
		if(arr[i]>=0)
			p++;
	}
	printf("\n+ve elements: %d\n-ve elements: %d\n",p,s-p);
}
