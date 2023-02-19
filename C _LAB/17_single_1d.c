#include<stdio.h>
int main()
{
    int arr[20];
    int product,i,n,sum;
    float num[100],avg;

    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    sum=0;
    product=1;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    avg=sum/n;
    printf("Average=%f",avg);
    printf("\nsum of array is:%d",sum);
    printf("\nproduct of array:%d",product);
    return 0;
}
