#include<stdio.h>
void inc();
int main()
{

   
    inc();
    inc();
    inc();
}
void inc()
{
    static int a=1;
    printf("a=%d\n",a);
    a++;   

    return 0;
}