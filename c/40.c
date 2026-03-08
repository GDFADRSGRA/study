#include <stdio.h>

int main() {
    int sum = 0;  // 存储奇数和，初始化为0
    // i从1开始（第一个奇数），每次+2（只取奇数），到99（100内最大奇数）结束
    for (int i = 1; i <= 99; i += 2) {
        sum += i;  // 累加每个奇数
    }
    printf("1到100以内的奇数和为：%d\n", sum);  // 输出结果
    return 0;
}