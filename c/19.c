#include<stdio.h>
int main()
{
    //逗号运算符（分隔符）
    int i;
    printf("%d\n",(i = 3, ++i, i++,i+5));

    /*
    主持人给出任意一个数字，有三位小朋友对这个数字进行了不同的操作。
        注意:每个小朋友都是拿着前一个的结果进行的操作
        第一个小朋友:变成该数字的绝对值
        第二个小朋友:除以3获取余数
        第三个小朋友:乘以10
        请问该数字最终为多少
    */

    //1.定义变量
    int number = -17;
    //2.变成该数字的绝对值
    number = number >= 0 ? number : -number;
    //3.除以3获取余数
    //number = number % 3;
    number %= 3;
    //4.乘以10
    //number = number * 10;
    number *= 10;
    printf("%d\n",number);
    return 0;
}
