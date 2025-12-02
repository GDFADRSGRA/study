#include<stdio.h>
int main() {
   /*
     考试奖励
        95~100：自行车一辆
        90~94：游乐场玩一天
        80~89：变形金刚一个
        80以下：胖揍一顿
   */ 

   //1.定义一个变量记录小明的成绩
   int score = 110;

   //2.判断
   if(score >= 0 && score <= 100)
   {
        //正常数据
         if(score >= 95 && score <= 100)
         {
         printf("自行车一辆");
         }
         else if(score >= 90 && score <= 94)
         {
         printf("游乐场玩一天");
         }
         else if(score >= 80 && score <= 89)
         {
         printf("变形金刚一个");
         }
         else 
         {
         printf("胖揍一顿");
         }
        }
     else
         {
         //异常数据
          printf("该分数超出范围");
         }
 return 0;
}