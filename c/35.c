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
        printf("冬季\n");
        break;
    case 2:
        printf("冬季\n");
        break;
    case 3:
        printf("春季\n");
        break;
    case 4:
        printf("春季\n");
        break;
    case 5:
        printf("春季\n");
        break;
    case 6:
        printf("夏季\n");
        break;
    case 7:
        printf("夏季\n");
        break;
    case 8:
        printf("夏季\n");
        break;
    case 9:
        printf("秋季\n");
        break;
    case 10:
        printf("秋季\n");
        break;
    case 11:
        printf("秋季\n");
        break;
    case 12:
        printf("冬季\n");
        break;
    default:
        printf("没有这个月份\n");
        break;
    }

    return 0;
}