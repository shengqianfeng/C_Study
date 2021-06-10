#include <stdio.h>

//运算符
int main1(){
	int a = 10;
	int b = 3;
	int c = a*b;

	printf("c=a*b=%d\n", c);//30


	 c = a/b;
	 printf("c=a/b=%d\n", c);//3

	// b = 0;
	 //c = a / b;
	 //printf("c=a/b=%d\n", c);//崩溃出错
	 c = a % b;
	 printf("c=a%%b=%d\n", c);//取余1

	 //以下两种等价
	 a = a + 5;
	 a += 5;
	 a++;
	 a--;
	 int f = 5;
	int  g = f++ + ++f;
	//相当于
	/*f = f + 1;
	int g = f + f;
	f = f + 1;
	*/
	 printf("%d\n", g);//12
	 printf("%d\n", f);//7


	 return 0;
}

//优先级
int main(){
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;
	int i = (a = b, a + d);
	printf("i=%d\n", i);//8

	a = 2; b = 3; c = 4; d = 5;
	i = a + b - c*d;
	printf("i=%d\n", i);//-15

	i = a = b = c;
	printf("i=%d\n", i);//4

	{
		i = 100;
		a = 30;
	}
	printf("i=%d\n", i);//100
	//只有一个；号的语句就是空语句，空语句在c语言里边是合法的，并且在某些场合是必用的
	//空语句
	/*for (;;)
	{

	}*/
	for (i = 0; i < 3; i++){
		printf("hello\n");
	}
	//(double)3将整数3强制转化为double
	double f = (double)3 / 2;
	f = 3.0 / 2;//跟上边结果一致
	printf("%f\n", f);//1.50000

	int m = 3;
	int n = 2;
	double k = (double)m / n;
	printf("%f\n", k);//1.50000

	return 0;
}