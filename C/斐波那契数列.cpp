# include <stdio.h>
int main()
{
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++)
	{
		printf("%18d%18d",f1,f2);//���ַ�������Ч�ʸߣ�һ�δ�ӡ�������� 
		if(i%2==0)//��������Ҳ����4�������� 
		printf("\n");
		f1 = f1 + f2;//���︳ֵ����� 
		f2 = f2 + f1;
		 
	}
	return 0;
}
