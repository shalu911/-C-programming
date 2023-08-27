#include<stdio.h>
int main()
{

    int a[]={12,22,33,44,55,66,77,88,99};
    int key,i,search=0;
    printf("\n enter any one no");
    scanf("%d",&key);
    for(i=0;i<=10;i++)
{
    if(key==a[i])
    search=1;
}
if(search==1)

printf("\n the no %d exist in array",key);

else

printf("\n the no of %d  does't exist in the array ",key );

return 0;
}