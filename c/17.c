#include<stdio.h>
int main()
{
    /*
       需求4:
          键盘录入一个两位整数，要求该数字不能包含7，而且不能是7的倍数
          如果符合要求，输出1，不符合要求输出0
    */
    // 1.键盘录入一个两位整数
    int number;
    printf("请输入一个两位数:\n");
    scanf("%d",&number);
    printf("%d\n",number);

    //2.要求该数字不能包含7
    //个位不能是7，而且十位也不能是7
    int ge = number % 10;
    int shi = number / 10 % 10;

    //判断
    // && || 可以连续写多个的
    //多个&&，表示同时满足多个条件
    //多个||，表示在多个条件中，只要满足其中一个
    //a == 1 || a == 2 || a == 3
    printf("%d\n", ge != 7 && shi != 7 && number % 7 != 0);

    return 0;
}