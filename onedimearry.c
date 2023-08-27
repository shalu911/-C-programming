#include <stdio.h>
int main()
{

    int a[5];
    int i, key, flag;
    flag = 0;
    printf("enter any five no");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element you want to search");
    scanf("%d", &key);
    for (i = 0; i <= 4; i++)
    {
        if (a[i] == key)
            {
                flag = 1;
                break;
            }
    }
    if (flag == 1)
    {
        printf("element found search is successful");
    }
    else
    {
    printf("element not found search is unsuccessfull");

    }
return 0;
}