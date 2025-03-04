#include<stdio.h>
int main()
{
	int p;
	printf("Enter the p=");
	scanf("%d",&p);
	int i,j;
	for(i=0;i<=p;i++)
	{
		for(j=0;j<=i;j++)
		printf("@");
		printf("\n");
	}
	return 0;
}
