#include<stdio.h>
main()
{
	int a=2,b=5,c=10,B,C,D,A,f;
	printf("Enter the value of X:-");
	scanf("%d",&f);
	A=((a*f*f)+(b*f)+c);
	printf("A=%d\n",A);
	B=(a+(b/c));
	printf("B=%d\n",B);
	C=((25%b)+(b/3)+(b/a)+(c%2));
	printf("C=%d\n",C);
	D=((a*a*a)+(b*b)-c);
	printf("D=%d",D);
}

