/*��ȫϵ 1000 ��ѧ���о��д���ļ�裬�������ﵽ
2 ��Ԫʱ�ͽ�����ͳ�ƴ�ʱ���������Լ�ƽ��ÿ��
������Ŀ��*/
#include<stdio.h>
#define STUDENTS 1000
#define TOTAL 20000
int main()
{
	int i,donation;
	int total = 0,count = 0;
	float averge;
	for(i=1;i<STUDENTS;i++)
	{
		printf("�������%dλѧ���ľ�����",i);
		scanf("%d",&donation);
		total = total + donation;
		count ++;
		if(total>=TOTAL)
		{
			break;
		}
	 }
	 averge =  float(total) / count;
	 printf("��������Ϊ%d�ˣ�ƽ�������ĿΪ%f\n",count,averge);
	 return 0;
	
}
