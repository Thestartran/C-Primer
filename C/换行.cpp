/*#include<stdio.h>
int main()
{
	int i,n = 1;
	for(i=1;i<=1000;i++)
	{
		if(i % 3 == 1 && i%5 == 2 && i % 7 == 3)
		{
			printf("%d ",i);		//��%d����ӿո�Ϳ��Էֿ����� 
		}
		if(n++ % 5==0)
			printf("\n"); 
		
	}
	printf("\n");
	return 0;
}*/
#include <stdio.h>
int main()
{
    int i, n = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 1 && i % 5 == 2 && i % 7 == 3)
        {
            printf("%d ", i); 
        	n++;        				//Ч�ʸߣ���n�Ž�if���棬�����if��ӡҲҪ�Ž��ڲ㣬����ͻ��ü��� 
		if (n % 5 == 0){
        	printf("\n");
			}
  		}
    }
    printf("\n");
    return 0;
}
