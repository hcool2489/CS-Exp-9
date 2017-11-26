#include<stdio.h>
void main()
{
	int HILLARY[5],TRUMP[5],i,sh=0,st=0;
	printf("Enter Votes for Hillary and Trump respectively:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t: ",i+1);
		scanf("%d%d",&HILLARY[i],&TRUMP[i]);
	}
	printf("\nWinner in each State:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t: ",i+1);
		if(HILLARY[i]>TRUMP[i])
			printf("Hillary");
		else if(TRUMP[i]>HILLARY[i])
			printf("Trump");
		else
			printf("! TIE !");
		sh+=HILLARY[i];
		st+=TRUMP[i];
		printf("\n");
	}
	printf("\nWinner is ");
	if(sh==st)
		printf("no one\n ** Re-Election is adviced...");
	else if(sh>st)
		printf("Hillary with %d votes",sh-st);
	else
		printf("Trump with %d votes",st-sh);
	printf("\n\n");
}
