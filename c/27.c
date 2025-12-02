#include<stdio.h>
int main()
{
    //需求:温度大于37.5度，就会有语音警告
    //定义变量记录体温
    double temperature = 38.5;
    //判断
    if(temperature > 37.5)
    {
        printf("体温过高，语音报警");
    }
    return 0;
}