#include<stdio.h>
int main()
{
    int week = 5;
    switch(week)
    {
    case 1:
        printf("使用初音未来抱枕");
        break;
    case 2:
        printf("使用蜡笔小新抱枕");
        break;
    case 3:
        printf("使用迪诺抱枕");
        break;
    case 4:
        printf("使用亚狮龙抱枕");
        break;
    case 5:
        printf("使用安踏抱枕");
        break;
    case 6:
        printf("使用尤尼克斯抱枕");
        break;
    case 7:
        printf("使用天斧抱枕");
        break;
    default:
        printf("没有这个星期");
        break;
    }
    return 0;
}