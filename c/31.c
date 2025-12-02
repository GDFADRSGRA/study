#include<stdio.h>

int main() {
    /*
      需求：
      键盘录入游戏氪金的总额度，不同的额度VIP等级也不一样
      1~99元：尊贵的VIP1
      100~499元：尊贵的VIP2
      500~999元：尊贵的VIP3
      1000~1999元：尊贵的VIP4
      2000~5000元：顶级的VIP5
      
      格式：
         if(){}
         else if(){}

    */
   //1.键盘录入游戏氪金的总额度
   int money;
   printf("请输入您在游戏中的氪金总额度\n");
   scanf("%d",&money);

   //2.判断游戏中氪金的总额度
   if(money == 0){
      printf("0冲玩家\n");
   }else if(money >= 1 && money <= 99){
     printf("尊贵的VIP1\n");
   }
   else if(money >= 100 && money <= 499){
      printf("尊贵的VIP2\n");
   }
   else if(money >= 500 && money <= 999){
      printf("尊贵的VIP3\n");
   }
   else if(money >= 1000 && money <= 1999){
      printf("尊贵的VIP4\n");
   }
    else{
        //超过5000的情况
         printf("尊贵的VIP5\n");
    }
    return 0;
   }