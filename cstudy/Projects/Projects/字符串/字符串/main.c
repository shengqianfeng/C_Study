
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define STR "hello"

#define ABC 100

//#pragma warning(disable:4996)

//字符串
int main1(){
	//%s指的是输出一个字符串
	printf("%s\n","hello world\n");
	printf("%%\n");//输出%

	printf("%s %d \n", STR, ABC);// hello 100

	long l = 100;
	printf("%ld\n", l);//100的长整数
	printf("%6ld\n", l);//   100 至少显示6个字符
	printf("%-6ld\n", l);//100 至少显示6个字符，且左对齐
	printf("%06ld\n", l);//000100 至少显示6个字符，且不足补0



	//putchar是输出显示一个字符的函数
	putchar(67);//打印67对应的字母C
	putchar('A');//A

	int a = 0;
	int b = 0;
	

	//scanf通过键盘读取到输入数字赋值给a
	scanf("\n%d", &a);//一定要用&取变量地址
	scanf("%d", &b);
	printf("\na+b=%d\n", a + b);

	



	return 0;
}


int main(){
	char d = 0;
	d = getchar();//得到用户键盘的按键

	//printf("%c", d);
	
	getchar();

	char e = 0;
	e = getchar();//得到用户键盘的按键

	//printf("%c", e);
	printf("d+e=%d", (d-'0') + (e-'0'));//16
	return 0;
}

