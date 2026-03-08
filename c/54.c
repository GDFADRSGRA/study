#include<stdio.h>
int main()
{ 
    /*
       打印一个3行5列的*
           效果如下：
                *****
                *****
                *****
        先确定内循环是做了什么事情
        外循环其实就是把里面的代码重复执行了N次        
    */

    //外循环
    for(int i = 1;i <= 3;i++)
    {
        //内循环
        for(int j = 1;j <= 5;j++)
        {
           printf("*");
        }  
        printf("\n");
    }

    return 0;
}     