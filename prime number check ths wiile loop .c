#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter the n=");
	scanf("%d",&n);
	i=2;
	while(1<n)
	{
		if(n%i==0)
	{
	 count=1;
	 break;
	 }
    }
  if(count==1)
  {
  	printf("%d is not prime number",n);
  }
  else
  {
  	printf("%d in prime number",n);
  }
  return 0;
}
