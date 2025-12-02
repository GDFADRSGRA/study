#include<stdio.h>
int main()
{
    //从优先级最低的运算符开始找，把整个的表达式分成N个小段
    //先找赋值运算符
    //再找||
    //&&
    int a = 3;
    int b = 4;
    int c = 5;
    int num = a || b + c && b - c;
    printf("%d\n",num);
    return 0;
}