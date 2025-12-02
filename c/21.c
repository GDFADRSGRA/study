#include<stdio.h>
int main()
{
    /*
       解题关键:
          从左边的第一个问号开始往后找冒号
          如果过程当中，遇到了其他冒号，那么找冒号的数量加1
    */

    //练习1：
    int w = 4, x = 3, y = 2, z = 1;

    int number = w < x ? w : z < y ? z : x;
    printf("%d\n",number);

    return 0;
}