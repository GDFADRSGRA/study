#include<stdio.h>
int main()
{
    /*
       循环嵌套的跳出问题
       break:只能跳出单层循环
       goto:可以跳出多层循环
    */

    //外循环
    for(int i = 1;i <= 3;i++)
    {
        //内循环
        for(int j = 1 ; j <= 5 ;j++)
        {
            printf("内循环执行%d\n",j);
            //break;//跳出内循环
            goto a;
        }
        printf("内循环结束\n");
        printf("----------\n");
    }

    //标号
    a:printf("外循环结束\n");

    return 0;
}         