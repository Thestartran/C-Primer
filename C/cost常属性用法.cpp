#include <stdio.h>
int main()
/*{
	int num = 4;
	printf("num = %d\n",num);
	 num = 8;
	printf("num = %d\n",num);
	return 0;
}*/
//��ʱ��������num��ֵ���ܴ�ӡ����������˳���ӡ 
{
	//����һ��const���������ı仯
	const int num = 4;  				//const������������γ�������Ҳ����˵����const֮�����num��ֵ����仯 
	printf("num = %d\n",num);			//������ָ�ڳ������й����в����޸ĵ�ֵ��ʹ�� const �ؼ��ֿ��Խ���������Ϊ�������Ӷ���������жԸñ����������
	 num = 8;
	printf("num = %d\n",num);
	return 0;
 } 
 //��ʱ���ֲ��ܴ�ӡ������ 
