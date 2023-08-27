#include<stdio.h>
int main()
{

    int a[5];
    int i,
    sum=0;
    printf("enter any five number");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];

    }
    printf("sum=%d",sum);
return 0;
}