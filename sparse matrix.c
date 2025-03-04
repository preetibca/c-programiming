#include<stdio.h>
int main()
{
	int sparseMatrix [4][5]={{0,0,3,0,4},{0,0,5,7,0},{0,0,0,0,0},{0,2,6,0,0}},i,j,k=0,size=0;

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
		if(sparseMatrix[i][j]!=0)
		{
			size++;
			}	
		}
	}
	int finalMatrix[3][size];
	k=0;
	
	for(i=0;i<4;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		if(sparseMatrix [i][j]!=0)
    		{
    			finalMatrix[0][k]=i;
    			finalMatrix [1][k]=j;
    			finalMatrix [2][k]=sparseMatrix[i][j];
    			k++;
			}
		}
	}
	printf("finalMatrix-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<size;j++)
	{	
	printf("%d\t ",finalMatrix[i][j]);
}
	printf("\n");
}
return 0;
}
