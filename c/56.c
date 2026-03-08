#include<stdio.h>
int main()
{ 
    /*
       打印九九乘法表

       1.先打印9行9列的矩形
       2.改成直角三角形
       3.改成99乘法表
    */
   for(int i = 1;i <= 9;i++)
   {
      for(int j = 1;j <= i;j++)
      {
        printf("%d * %d = %d\t", j , i , i * j);
      }
      printf("\n");
   }
    return 0;
}     