#include<stdio.h>
void main()
{
	int d,i;
	char a[31];
	printf("Enter Decimal no: ");
	scanf("%d",&d);
	printf("Binary of %d is: ",d);
	for(i=0;d>0;d/=2,i++)
		a[i]=d%2;
	for(--i;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}
