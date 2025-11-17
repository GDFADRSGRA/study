#include<stdio.h>
int main()
{
    int a=10;
    int k1 = a++ + a++;
    int k2 = ++a + ++a;
    int k3 = ++a + a++;
    int k4 = a++ + ++a;
    printf("%d\n",k1);
    printf("%d\n",k2);
    printf("%d\n",k3);
    printf("%d\n",k4);
    return 0;
}