#include<stdio.h>
int main()
{ 
    //利用do...while打印1~5
    //特点：先执行再判断，循环体至少执行一次

    /*
    int i = 10;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i <= 5);
    */

    for(int i = 10;i <= 5;i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}     