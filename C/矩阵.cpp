#include<stdio.h>
int main()
{
	int i,j;
	//int n = 0;
	for(i=1;i<=4;i++)
	{
		
		for(j=1;j<=5;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");//����һ����ѭ�����ͻ��� 
	}
	return 0;
}
#include <stdio.h>
/*�ڶ���д�� 
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 4; i++) // ��������
    {
        for (j = 1; j <= 5; j++) // ��������
        {
            printf("%d\t", i * j); // ���Ԫ��
            n++; // �������� 1
            if (n % 5 == 0) // ����Ѿ������ 5 ��Ԫ�أ��ͻ���
            {
                printf("\n");
            }
        }
    }
    return 0; // �������
}
*/
