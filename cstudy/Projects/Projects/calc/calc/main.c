#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(){
	int a = 0;
	int b = 0;
	char c = 0;
	printf("plsease input a :");
	scanf("%d", &a);
	
	getchar();//ͨ��getchar���������֮ǰ����aʱ�û����Ļس����յ�

	printf("plsease input operator :");
	scanf("%c", &c);

	printf("plsease input b :");
	scanf("%d", &b);

	/*
	if (c == '+'){
		printf("a+b=%d\n", a + b);
	}
	else if (c == '-'){
		printf("a-b=%d\n", a - b);
	}
	else if (c == '*'){
		printf("a*b=%d\n", a * b);
	}
	else if (c = '/'){
		if (b == 0){
			printf("b should not be zero��");
			return;
		}
		printf("a/b=%d\n", a / b);
	}
	else{
		printf("error\n");
	}
	*/
	switch (c)
	{
		case '+':
			printf("a+b=%d\n", a + b); break;
		case '-':
			printf("a-b=%d\n", a - b); break;
		case '*':
			printf("a*b=%d\n", a * b); break;
		case '/':
			if (b == 0){
				printf("b should not be zero��");
				return;
			}
			printf("a/b=%d\n", a / b); break;
		default:
			printf("err��");
	}

	return 0;
}
/*
�������ܸ��ӣ�һ����������&&��||����������ô��if���
��������ܼ򵥣����Ƿ�֧�ܶ࣬��ô�ʺ���switch
*/



int main(){
	goto end;//��ת��end���
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	/*int c;
	if (a > b){
		c = a;
	}
	else{
		c = b;
	}*/
	

	//��Ŀ�����
	int c = (a > b) ? a : b;
	printf("c=%d\n", c);
end:
	printf("end");
	return 0;
}