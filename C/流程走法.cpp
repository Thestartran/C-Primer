#include<stdio.h>
int main(){
	int i=0,s=0;
	do{
		if(i%2)	{			//���Կ�����i����2�������Ƿ�Ϊ0���������Ϊ0��������������ǼٵľͲ�ִ��if�������ľ��ӣ� 
		i++;
		continue;			//continue�������ִ�����ѭ����䣻���û��continue�򲻻����ִ��ѭ����䣻
		}
		i++;
		s+=i;	//s=s+i;
	}while(i<5)	;			//Ҳ����continue���������� 
	printf("%d\n",s); 
	return 0;
}

