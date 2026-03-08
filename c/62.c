#include<stdio.h>
int main()
{
    /*
       goto:结合标号，可以调到代码中的任意地方
            一般只用于跳出循环嵌套
    */

    int i = 1;
a:
    printf("你好你好%d\n",i);
    i++;

    if(i == 15)
    {
        goto b;
    }
    goto a;

b:
    printf("看看我执行了吗？");    

    return 0;
}      