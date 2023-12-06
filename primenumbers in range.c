#include<stdio.h>
void main()
{
	int start,end,i,j,count;
	printf("enter your start and ending numbers:");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		printf("\n%d",i);
	}
}
