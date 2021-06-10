#include <stdio.h>

void test(int n)
{
	if (n > 0)
	{
		n--;
		printf("先序n = %d\n", n);//先序递归，如果是先序递归，那么代码是顺序执行的
		test(n);//函数自己调用自己,就叫函数的递归
		printf("后序n = %d\n", n);//后序递归，如果是后序递归，那么代码是逆序执行

	}
}

void test1(int n)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d\n", i);
	}
}

void test2(int n)
{
	if (n >0)
	{
		n--;
		printf("%d\n", n);
		test2(n);

	}
}

int age(int n)
{
	if (n == 1)
		return 10;//第一个人年龄是10岁
	else
	{
		return age(n - 1) + 2;//前一个人总是比后一个人大2岁
	}
}

//将十进制转化为二进制的方法
void bin(int n)
{
	int i = n % 2;

	if (n > 0)
	{

		bin(n / 2);
		printf("%d", i);
	}
}


char hex1(int n)
{
	switch (n)
	{
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 10:
		return 'A';
	case 11:
		return 'B';
	case 12:
		return 'C';
	case 13:
		return 'D';
	case 14:
		return 'E';
	case 15:
		return 'F';
	default:
		return '0';
	}
}
//将十进制转化为十六进制的方法
void hex(int n)
{
	int i = n % 16;

	if (n > 0)
	{
		hex(n / 16);
		printf("%c", hex1(i));
	}
}

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//递归求和
int sum(int n)//大于0的整数，求n + (n - 1) + (n - 2) + .......0 
{
	if (n == 1)//递归终止条件
		return 1;
	else
		return sum(n - 1) + n;
}

//用递归实现求字符串的长度
int mystrlen(char s[], int n)
{
	if (s[n])
	{
		return mystrlen(s, n + 1);
	}
	else
	{
		return n;
	}
}

int main()
{
	printf("%d\n", sum(10));//55
	printf("%d\n", fib(6));//8
	printf("%d\n", mystrlen("hello", 0));
	int i = 255;
	hex(i);
	//printf("age = %d\n", age(i));
	return 0;
}