#include<stdio.h>
int main()
{
	int marks;
	printf("Enter eag\n");
    scanf("%d",&marks);
	if( marks==100)
	{
		printf("Ginus");	
	}
	else if(marks>=80&&marks<100)
	{
		printf("Toper");
		
	}
	else if(marks>=60&&marks<=79)
	{
      printf("First");
}
else
{
	printf("Avereg");
	
}
	return 0;
}
