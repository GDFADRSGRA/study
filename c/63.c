#include<stdio.h>
void playGame()
{
    printf("选择人物\n");
    printf("准备开局\n");
    printf("开始对线\n");
    printf("碾压崩盘\n");
    printf("问候队友\n");
    printf("疯送人头\n");
    printf("下把继续\n");
}


int main()
{
    /*
      函数最基本的定义格式
        void 函数名()
        {
           函数体；
        }
      函数的调用方式：
         函数名（）；
    */

    //调用playGame这个函数
    playGame();
    printf("------\n");
    playGame();


    return 0;
}          