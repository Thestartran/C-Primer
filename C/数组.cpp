#include <stdio.h>

int main()
{
    int prime[101];
    int i, j;

    // 初始化数组
    for(i=0; i<=100; i++)
        prime[i] = 1;

    // 筛法查找素数
    for(i=2; i*i<=100; i++)
    {
        if(prime[i] == 1)
        {
            for(j=i*i; j<=100; j+=i)
                prime[j] = 0;
        }
    }

    // 输出素数
    printf("1-100之间的素数为：\n");
    for(i=2; i<=100; i++)
    {
        if(prime[i] == 1)
            printf("%d ", i);
    }

    return 0;
}
