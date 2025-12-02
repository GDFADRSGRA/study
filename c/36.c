#include<stdio.h>
int main()
{
    int month;
    printf("请输入对应的月份：\n");
    scanf("%d",&month);

    printf("%d\n",month);
    switch(month)
    {
    case 1:
    case 2:
    case 12:
        printf("冬季\n");
        break;
    case 3:
    case 4:
    case 5:
        printf("春季\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("夏季\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("秋季\n");
        break;
    default:
        printf("没有这个月份\n");
        break;
    }

    return 0;
}