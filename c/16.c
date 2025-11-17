#include <stdio.h>
int main()
{
    /*
       需求1:
       键盘录入一个两位整数，要求该数字不能包含7
       如果符合要求，输出1，不符合要求输出0
       88:1
       17，77,71;0
       读题拆解法
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
    printf("%d\n", ge != 7 && shi != 7);
    return 0;
}