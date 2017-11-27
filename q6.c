#include<stdio.h>
void main()
{
	int i,class[10];
	printf("Enter roll no of students present(sorted):\n");
	for(i=0;i<9;i++)
		scanf("%d",&class[i]);
	printf("Absent roll no is: ");
	for(i=0;i<9;i++)
	{
		if(class[i]!=(i+1))
			break;
	}
	printf("%d\n",i+1);
}
