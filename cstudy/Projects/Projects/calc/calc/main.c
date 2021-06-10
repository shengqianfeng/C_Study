#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(){
	int a = 0;
	int b = 0;
	char c = 0;
	printf("plsease input a :");
	scanf("%d", &a);
	
	getchar();//通过getchar将这个函数之前输入a时用户按的回车先收到

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
			printf("b should not be zero！");
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
				printf("b should not be zero！");
				return;
			}
			printf("a/b=%d\n", a / b); break;
		default:
			printf("err！");
	}

	return 0;
}
/*
当条件很复杂，一个条件中有&&，||，！存在那么用if语句
如果条件很简单，但是分支很多，那么适合用switch
*/



int main(){
	goto end;//跳转到end标号
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
	

	//三目运算符
	int c = (a > b) ? a : b;
	printf("c=%d\n", c);
end:
	printf("end");
	return 0;
}