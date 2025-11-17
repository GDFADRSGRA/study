#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    a += b;
    printf("%d\n",a);
    printf("%d\n",b);
    a *= b;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}