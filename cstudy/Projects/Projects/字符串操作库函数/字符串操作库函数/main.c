#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main1(){

	char s[100] = "hello world";
	//��ȡ�ַ�������
	int len = strlen(s); 
	//ֻ�����ַ�������Ч�ַ����ȣ��������ַ���������0
	printf("len=%d\n", len);

	char s1[100] = "abc123456789";
	//��s�ַ�����׷���ַ���s1������ŵ�s�У��������Ҳ����ȫ�л������������
	//strcat(s, s1);
	//��s����׷���ַ���������׷��6���ַ�������ľܾ�����������ǰ�ȫ�ģ������ڻ������������
	strncat(s, s1, 6);


	printf("%s\n", s);





	return 0;
}

//�Ƚ��ַ������
int main2(){
	/*char s1[100]="hello";
	char s2[100] = "hello";
	//if (s1 == s2);//�����ģ�ͣ��ַ�������ͨ���ȺűȽ�
	if (strcmp(s1, s2) == 0)//�������ֵΪ0��������е������ַ����������
	{
		printf("���\n");
	}
	else{
		printf("����ͬ\n");
	}*/


	char s1[100] = "123456";
	char s2[100] = "abcdef";
	//if (s1 == s2);//�����ģ�ͣ��ַ�������ͨ���ȺűȽ�
	if (strncmp(s1, s2,5) == 0)//strncmpֻ�Ƚ�ǰ����ַ����������ֵΪ0��������е������ַ����������
	{
		printf("���\n");
	}
	else{
		printf("����ͬ\n");
	}

	//��s2�����ݿ�����s1
//	strcpy(s1, s2);
	//��s2��ǰ3���ַ�������s1�У�s1�ĺ�߲���
	//strncpy(s1, s2,3);
	//printf("%s\n", s1);//abc456



	return 0;
}

//�ַ�����������ת��
int main3(){

	int i = 200;
	//itoa();//���Ǳ�׼��c���Կ⺯��
	//atoi;//�ַ���ת������atoi�Ǳ�׼��c���Կ⺯��
	char s[100] = { 0 };
	sprintf(s,"i=%d",i);//����ʽ������ַ����������һ������ָ�����ַ�������s��
	printf("%s\n", s);//i=200
	return  0;
}

//�ַ�����������
int main4(){

	/*char s[100] = "abc=100";
	int i=0;
	sscanf(s, "abc=%d", &i);
	printf("%d\n", i);//100
	*/
	//ʹ��sscanf����Ӽ���
	char s[100] = "5+6=";
	int  a = 0;
	int b = 0;
	sscanf(s, "%d+%d", &a, &b);
	printf("%d\n", a+b);

	strcpy(s,"hello world");
	/*��s����ַ����м䣬���ҵڶ�������ָ�����ַ����Ҳ�������null��
	�ҵ�����ҵ���λ�÷��ص����֮����ַ���
	*/
	char *buf = strchr(s, 'o');
	printf("%s\n", buf); // o world
	
	buf = strstr(s, "ll");
	printf("%s\n", buf); // llo world
	

	strcpy(s, "abc_12345_ee");//���ַ��������е�_���ŷָ���Ӵ��ó���

	//strtok��һ�ε��õ�ʱ���һ������ʱ�ַ��������ڶ��ε��õ�ʱ�򣬵�һ������ʱNULL
	buf = strtok(s, "_");
	while (buf){
		printf("%s\n", buf);//12345
		buf = strtok(NULL, "_");//���strtokû���ҵ�ָ���ķָ���ţ���ô����NULL
	}


	return 0;
}

//���ַ���ת��Ϊ����
int main(){
	char s[100] = "200";
	//ʵ���ַ�����int�͵�ת��
	int i = atoi(s);
	printf("i=%d\n", i);//i=200

	int len = 0;
	char arr[100] = "�й�abc";
	while (arr[len++]);//���ַ�������Ч�ֽڳ���
	len--;
	/*
	��arr����ָ���˴�С��ʱ��arr���ַ�����len��7��sizeof��100
	��arr����û��ָ����С��ʱ��len��7��sizeof��8
	*/
	printf("%d\n", len);
	printf("%d\n", sizeof(arr));
	
	printf("-----------------\n");
	
	int len1 = 0;
	char arr1[] = { '��','��','a','b','c' };
	//���ַ�������Ч�ֽڳ���
	while (arr1[len1++]);
	len1--;
	printf("%d\n", len1);//17���ֽ� 
	printf("%d\n", sizeof(arr1));//5��Ԫ��
	//char��c�����е���С��λ
	char c =  '��';
	printf("%d\n", sizeof(c));//1�ֽ� sizeof����char����1���ֽ� 
	printf("%d\n", sizeof('��'));//4�ֽ� sizeof����int���ͣ��ĸ��ֽ�
	return 0;
}