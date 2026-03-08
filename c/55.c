#include<stdio.h>
int main()
{ 
    /*
       打印一个5行5列的三角形
       效果如下：
           *****        *
           ****         **
           ***          ***
           **           ****
           *            *****
    */

    //1.先把矩形给打印出来
    //2.在矩形的基础上，进行改写
    for(int i = 1;i <= 5;i++)
    {
        for(int j = 1;j <= i;j++)//for(int j = i ;j <= 5;j++此为倒三角形)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}     