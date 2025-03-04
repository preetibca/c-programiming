 #include<stdio.h>
 int main()
 {
 	int i,f,num;
 	printf("enter the number:");
 	scanf("%d",&num);
 	f=1;
 	for(i=1; i<=num; i++)
 	{
 		f=f*i;
 		
	 }
	 printf("the foctorial of %d is %d ",num,f);
	 return 0;
 }
