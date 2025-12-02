#include<stdio.h>
int main()
{
    int number = 1;
    switch(number)
    {
    case 1:
        printf("当前的数字是1\n");
        break;
    case 2:
        printf("当前的数字是2\n");
        break;
    default:
        printf("当前的数字是其他\n");
        break;
    }

    return 0;
}