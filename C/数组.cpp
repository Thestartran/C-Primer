#include <stdio.h>

int main()
{
    int prime[101];
    int i, j;

    // ��ʼ������
    for(i=0; i<=100; i++)
        prime[i] = 1;

    // ɸ����������
    for(i=2; i*i<=100; i++)
    {
        if(prime[i] == 1)
        {
            for(j=i*i; j<=100; j+=i)
                prime[j] = 0;
        }
    }

    // �������
    printf("1-100֮�������Ϊ��\n");
    for(i=2; i<=100; i++)
    {
        if(prime[i] == 1)
            printf("%d ", i);
    }

    return 0;
}
