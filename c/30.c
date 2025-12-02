#include<stdio.h>
int main()
{
    int rowA = 5;
    int numberA = 6;
    int rowB = 6;
    int numberB = 7;
    if((rowA == rowB)&&(numberA - numberB == 1 || numberA - numberB == -1))
    {
        printf("我会开心的看电影");
    }
    else{
        printf("我会开心的打游戏");
    }
     return 0;
}