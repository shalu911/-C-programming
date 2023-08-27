#include<stdio.h>
int main()
{

    int a[]={9,25,2,6,1};
    int sum=0;
    int i;
  
    for (i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
return 0;
}