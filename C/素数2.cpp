#include <stdio.h>

// �ж�һ�����Ƿ�Ϊ����
int is_prime(int n)
{
    int i;
    if (n <= 1) {
        return 0;  // �������壺����1������
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n�ܱ�2��(i-1)֮�����������������˵��n��������
        }
    }
    return 1;  // n���ܱ�2��sqrt(n)֮�����������������˵��n������
}

int main()
{
    int n;
    printf("������һ������3��������");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d ��������\n", n);
    } else {
        printf("%d ����������\n", n);
    }

    return 0;
}
