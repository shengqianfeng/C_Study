#include <stdio.h>

//#define red 0
//#define black 1
//#define yellow 2

enum A
{
	red, black, yellow = 9, green
};

int main(void)
{
	//yellow = 20;//枚举是常量，值是不能修改的
	int color = green;
	printf("%d\n", color);
	return 0;
}

