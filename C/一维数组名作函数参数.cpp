#include <stdio.h>
float averge(float a[10])
{
	int i;
	float ave,sum = a[0];
	for(i=0;i<10;i++)
		sum = sum + a[i];
	ave = sum / 10;
	return (ave);
}
int main()
{
	float averge(float a[10]);		//a���β������� 
	float score[10],aver;			//score��ʵ����������Ӧ�ֱ��������ں������ж��壬����ֻ��һ�����壻 
	int i;
	printf("input 10 scores:\n");
	for(i=0;i<10;i++)
		scanf("%f",&score[i]);
	printf("\n");
	aver = averge(score);
	printf("averge score is %5.2f\n",aver);
	return 0;
 } 
