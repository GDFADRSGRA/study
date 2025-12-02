#include<stdio.h>
int main()
{
    /*
       解题关键:
          从左边的第一个问号开始往后找冒号
          如果过程当中，遇到了其他冒号，那么找冒号的数量加1
    */

    //练习3:
    int x = 10;
    int y = 20;
    int z = 30;
    int h = 40;
    int w = 50;

    int number = x > h ?(z > w ? (x > z ? (x > y ? x : y): z): w):(w > h ? w : h);
    printf("%d\n",number);
    return 0;
}