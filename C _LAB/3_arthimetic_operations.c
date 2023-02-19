#include<stdio.h>
int main()
{
	float a,b;
	int op;
	printf(" 1.Addition 2.Substraction 3.Multiplication 4.Division 5.modulus 6.power");
	printf(" \n \n");
	printf(" enter your numbers : ");
	scanf("%f %f",&a,&b);
	printf(" enter your option :");
	scanf("%d",&op);
		int x=a;
		int y=b;
		int pow=1;
	
	switch(op)
	{
		case 1:
			printf(" sum of the %f and %f is :%f ",a,b,a+b);
			break;
		case 2:
			printf(" substraction of %f and %f is :%f ",a,b,a-b);
			break;
		case 3:
			printf(" multiplication  of %f and %f is : %f",a,b,a*b);
			break;
		case 4:
			printf(" division of %f and %f is : %f",a,b,a/b);
			break;
		case 5:
			printf(" modulus of %f and %f is : %d",x,y,x%y);
			break;
		case 6:
	     	while(y){
			  pow=pow*a;
			  y--;
		}
		printf(" power is %d",pow);
		break;
		default:
			printf("enter the correct option ");
			break;
			
	}return(0);
	
}
