/*在全系 1000 名学生中举行慈善募捐，当总数达到
2 万元时就结束，统计此时捐款的人数以及平均每人
捐款的数目。*/
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
		printf("请输入第%d位学生的捐款数额：",i);
		scanf("%d",&donation);
		total = total + donation;
		count ++;
		if(total>=TOTAL)
		{
			break;
		}
	 }
	 averge =  float(total) / count;
	 printf("捐款的人数为%d人，平均捐款数目为%f\n",count,averge);
	 return 0;
	
}
