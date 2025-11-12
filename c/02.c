#include<stdio.h>
int main(){
double length;
double width;
double height;
printf("请输入三个小数，分别表示长，宽，高");
scanf("%lf %lf %lf",&length,&width,&height);
double areaA=length*width;
double areaB=height*width;
double areaC=length*height;
printf("A面的面积为：%.2lf",areaA);
printf("B面的面积为：%.2lf",areaB);
printf("C面的面积为：%.2lf",areaC);
return 0;
}