#include<stdio.h>
int main(){
  //隐式转换：short类型的数据在参与计算时，提升为int
  //强制转换需要自己手动书写
  short s1=10;
  short s2=20;
  short result=(short)(s1+s2);
  printf("%d\n",result);
  //printf("%zu\n",sizeof((short)s1+s2));
return 0;
}
    