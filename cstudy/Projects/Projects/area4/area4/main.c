#include <stdio.h>

int c = 0;//��̬��

void test(int a, int b)
{
	printf("%d, %d\n", &a, &b);
}

int *geta()//�����ķ���ֵ��һ��ָ��
{
	auto int a = 100;
	return &a;
}//int a��������������{}

int main01(void)
{
	int *p = geta();//����õ�һ����ʱջ�����ĵ�ַ�������ַ�ں���geta�������֮���Ѿ���Ч��
	*p = 100;
	printf("%d\n", *p);
	return 0;

	static int d = 0;
	auto int a = 0;//��ջ��
	auto int b = 0;

	printf("%d, %d, %d, %d, %d\n", &a, &b, &c, &d, main01);
	test(a, b);
	return 0;
}


int main()
{
	char array[1024 * 1024 * 100] = { 0 };//100M,����һ����������飬һ����ջ���
	array[0] = 'a';
	printf("%s\n", array);
	return 0;
}

