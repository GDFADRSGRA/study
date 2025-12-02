#include<stdio.h>
int main()
{
    /*
        if的格式:
            if(关系表达式)
            {
                语句体;
            }
    */

    //需求：判断变量a里面记录的值，是否大于10，如果成立，就打印语句:真的大于10
    //定义变量
    int a = 20;
    if(a > 10)
    {
        printf("真的大于10");
    }
    return 0;
}