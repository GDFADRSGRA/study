#include<stdio.h>
int main()
{
    /*
       \t:制表符  长度可变的大空格
          原理：会根据前面字母的个数在后面补空格,让整体的长度达到8或者8的倍数，最少补一个，最多补8个
          作用：打印表格数据的时候，可以对齐

       abc\t  补5个
       zhangsan\t  补8个
       张\t   补6个
    */

    printf("name\t\tage\n");
    printf("zhangsan\t23");
    return 0;
}     