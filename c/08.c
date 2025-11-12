#include<stdio.h>
int main(){
 //int a=10;
 //int b=a++;//先用后加，此时使用的是原来的值
 //printf("%d\n",a);
 //printf("%d\n",b);
 int a=10;
 int b=++a;//先加后用，此时使用的是自增之后的值
 printf("%d\n",a);
 printf("%d\n",b);
return 0;
}