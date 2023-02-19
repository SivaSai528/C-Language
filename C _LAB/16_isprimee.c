#include<stdio.h>
int isprime(int num);
int main()
{
	int num=2,i,j,n;
	printf("enter the no of lines you want to print=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			while(!isprime(num))
			{
					num++;
			}
			printf("%d\t ",num);
		 num++;
		}
		printf("\n");
}
}
int isprime(int num)
{
	int m,count=0;
	for(m=2;m<num;m++)
	{
		if(num%m!=0)
	      count=1;
		else
		{
			count=0;
			break;
		}
	}
if(count==1 || num==2)
 return 1;
else
 return 0;        
}
