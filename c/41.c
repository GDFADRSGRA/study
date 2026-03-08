#include <stdio.h>

int main() {
    int sum = 0;  // 存储偶数和，初始化为0
    // i从2开始（第一个偶数），每次+2（只取偶数），到100（100内最大偶数）结束
    for (int i = 2; i <= 100; i += 2) {
        sum += i;  // 累加每个偶数
    }
    printf("1到100以内的偶数和为：%d\n", sum);  // 输出结果
    return 0;
}