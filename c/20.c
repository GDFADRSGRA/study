#include<stdio.h>
int main()
{
    //1.定义变量
    int number = -17;
    //2.利用逗号运算符得到最终的结果
    printf("%d\n",(number = number >= 0 ? number : -number,number %= 3,number *= 10));
    return 0;
}
