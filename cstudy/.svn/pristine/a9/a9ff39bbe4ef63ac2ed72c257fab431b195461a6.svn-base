#include <stdio.h>

int c = 0;//静态区

void test(int a, int b)
{
	printf("%d, %d\n", &a, &b);
}

int *geta()//函数的返回值是一个指针
{
	auto int a = 100;
	return &a;
}//int a的作用域就是这个{}

int main01(void)
{
	int *p = geta();//这里得到一个临时栈变量的地址，这个地址在函数geta调用完成之后已经无效了
	*p = 100;
	printf("%d\n", *p);
	return 0;

	static int d = 0;
	auto int a = 0;//在栈区
	auto int b = 0;

	printf("%d, %d, %d, %d, %d\n", &a, &b, &c, &d, main01);
	test(a, b);
	return 0;
}


int main()
{
	char array[1024 * 1024 * 100] = { 0 };//100M,定义一个超大的数组，一定会栈溢出
	array[0] = 'a';
	printf("%s\n", array);
	return 0;
}

