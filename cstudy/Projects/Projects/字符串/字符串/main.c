
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define STR "hello"

#define ABC 100

//#pragma warning(disable:4996)

//�ַ���
int main1(){
	//%sָ�������һ���ַ���
	printf("%s\n","hello world\n");
	printf("%%\n");//���%

	printf("%s %d \n", STR, ABC);// hello 100

	long l = 100;
	printf("%ld\n", l);//100�ĳ�����
	printf("%6ld\n", l);//   100 ������ʾ6���ַ�
	printf("%-6ld\n", l);//100 ������ʾ6���ַ����������
	printf("%06ld\n", l);//000100 ������ʾ6���ַ����Ҳ��㲹0



	//putchar�������ʾһ���ַ��ĺ���
	putchar(67);//��ӡ67��Ӧ����ĸC
	putchar('A');//A

	int a = 0;
	int b = 0;
	

	//scanfͨ�����̶�ȡ���������ָ�ֵ��a
	scanf("\n%d", &a);//һ��Ҫ��&ȡ������ַ
	scanf("%d", &b);
	printf("\na+b=%d\n", a + b);

	



	return 0;
}


int main(){
	char d = 0;
	d = getchar();//�õ��û����̵İ���

	//printf("%c", d);
	
	getchar();

	char e = 0;
	e = getchar();//�õ��û����̵İ���

	//printf("%c", e);
	printf("d+e=%d", (d-'0') + (e-'0'));//16
	return 0;
}

