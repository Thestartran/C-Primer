#include <stdio.h>

// 判断一个数是否为素数
int is_prime(int n)
{
    int i;
    if (n <= 1) {
        return 0;  // 质数定义：大于1的整数
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n能被2到(i-1)之间的任意整数整除，说明n不是质数
        }
    }
    return 1;  // n不能被2到sqrt(n)之间的任意整数整除，说明n是质数
}

int main()
{
    int n;
    printf("请输入一个大于3的整数：");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d 是质数。\n", n);
    } else {
        printf("%d 不是质数。\n", n);
    }

    return 0;
}
