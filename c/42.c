#include<stdio.h>
int main()
{
    /*
       需求：键盘录入两个数字，表示一个范围
       统计这个范围中
       既能被6整除，又能被8整除的数字有多少个？

       统计思想：定义一个变量，在合适的时候自增后即可
    */

    //1.键盘录入两个数字
    int num1;
    int num2;
    printf("请录入两个整数：\n");
    scanf("%d %d",&num1,&num2);

    //2.判断num1和num2谁大谁小
    int min = num1 < num2 ? num1 : num2;
    int max = num1 > num2 ? num1 : num2;
        
    //3.定义一个变量用来统计数字
    int count = 0;

   //4.获取范围中的每一个数字
   for(int i = num1;i <= num2;i++)
   {
     if(i % 6 == 0 && i % 8 == 0)
     { 
        count++;
     }
   }

   //512q1.打印
   printf("在这个范围当中，既能被6整除又能被8整除的数字一共有%d个\n",count);
    return 0;
}