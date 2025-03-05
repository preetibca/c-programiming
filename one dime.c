#include<stdio.h>
int main()
{

	int a[5],i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		printf("%d\n",a[i]);
	}
	return 0;
}
