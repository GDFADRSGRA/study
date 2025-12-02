#include<stdio.h>
int main()
{
    /*
       解题关键:
          从左边的第一个问号开始往后找冒号
          如果过程当中，遇到了其他冒号，那么找冒号的数量加1
    */

    //练习2:
    int a = 3, b = 2, c = 1;
    int max = a > b ?(a > c ? a : c) : (b > c ? b :c);
    printf("max = %d\n",max);
    return 0;
}