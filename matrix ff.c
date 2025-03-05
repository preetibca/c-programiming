#include<stdio.h>
int main()
{
	int num1[3][3]={1,2,3,4,5,6,7,8,9};
	int num2[3][3]={9,4,3,2,5,6,4,5,5};
	int add[3][3]
	printf("\n enter tha value four first matrix\n:");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("value of [%d][%d]=",i,k);
			scanf("%d",&a[i][k]);
		}
	}
	printf("\n enter the value second matrix\n");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("value of [%d][%d]=",i,k);
			scanf("%d",&b[i][k]);
		}
	}	
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			c[i][k]=a[i][k]+b[i][k];	
		}
	}
		for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d\t",c[i][k]);	
		}
		printf("\n");
	}
	return 0;
}

