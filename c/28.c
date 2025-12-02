#include<stdio.h>
int main()
{
    //需求：游戏中人物的血条
    //初始最大生命：200
    //受到了伤害：80
    //恢复了血量：100
    //请问：当前血量是多少？

    //定义变量记录数据
    int blood = 200;//初始最大生命
    int damage = 80;//受到了伤害
    int restore = 100;//恢复了血量
    
    //游戏的逻辑
    blood = blood - damage + restore;
    //printf("%d\n",blood); //220

    //判断
    if(blood > 200){
        blood = 200;
    }

    //打印当前生命
    printf("%d\n",blood);
    return 0;
}