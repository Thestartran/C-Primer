/*ˮ�ɻ�����ָһ����λ������ÿλ���ֵ������͵��ڸ�������
���磺153��һ����ˮ�ɻ���������Ϊ153=1�����η�+5�����η�+
3�����η���*/
/*��������forѭ������100-900������ÿ�����ֽ����λ��ʮλ����λ��
 �ٷֱ����������*/
 #include<stdio.h>
 #include<stdlib.h>
 int main(){
 	int n,b,s,g,sumb,sums,sumg;
 	printf("100-1000������ˮ�ɻ����ֱ��У�\n");
 	for(n=100;n<1000;n++)
 	{
 		b=n/100;
 		s=n/10%10;
 		g=n%10;
 		sumb=b*b*b;
 		sums=s*s*s;
 		sumg=g*g*g;
 		if(n==sumb+sums+sumg){
 			printf("%d\n",n);		 }
	 }
 	return 0;
 } 
