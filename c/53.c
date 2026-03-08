#include<stdio.h>
int main()
{ 
    /*
        需求：
             CB早上一共买了5个包子，吃到第三个包子时，发现里面有个虫子
             直接扔掉不吃了，开始吃下一个包子
       
        continue:结束本次循环，继续下一次循环     
    */

    //1.利用循环去吃包子
    for(int i = 1;i <= 5;i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("再吃第%d个包子\n",i);
    }
    return 0;
}     