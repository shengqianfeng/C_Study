#include <stdio.h>

#pragma warning(disable:4700)

int main01()
{
	int a = 0;
	int b = 10;
	char buf[10];
	printf("%p, %p, %p\n", &a, &b, buf);//&就是取变量地址的意思

	int *p;
	p = &a;//得到变量a的地址，将这个地址赋值给变量p
	printf("%X\n", p);
	//地址虽然是一个整数，但地址是一个特殊的整数，是不能直接通过整数来操作的
	int *p1;//定义一个变量，名字叫p1,它可以指向一个int的地址
	p1 = &b;//指针变量的值一般不能直接赋值一个整数，而是通过取变量地址的方式赋值


	return 0;
}

int main03()
{
	int a = 3;
	int *p;
	p = &a;
	//*p的意思是指针变量指向内存的内容
	//int b =*p;
	printf("%d\n", *p);
	*p = 10;//通过指针间接的修改指针指向变量的值
	printf("a = %d\n", a);

	printf("-----------------------------\n");

	char buf[10];
	/**
	说明
	1 buf和&buf[0]地址是一样的
	2 数组在内存中地址是连续的
	3 char占用1个字节
	*/
	printf("%u, %u, %u, %u\n", buf, &buf[0], &buf[1], &buf[2]);

	int buf1[10];
	/**
	说明
	1 buf1和&buf1[0]地址是一样的
	2 数组在内存中地址是连续的
	3 int占用4个字节
	*/
	printf("%u, %u, %u, %u\n", buf1, &buf1[0], &buf1[1], &buf1[2]);

	char c = 0;
	char *p2 = &c;

	void *p3;//这个叫无类型指针，意思是这只是一个指针变量，而不指向任何具体的数据类型
	p3 = NULL;//将指针赋值NULL，值为NULL的指针，我们俗称空指针

	printf("%d\n", sizeof(p3));

	return 0;
}

int main04()
{
	int a = 10;
	int *p;//p就是一个野指针，假设p运气好，指向一个程序有效地址，那么代码不会出错，如果运气不好，指向一个无效地址，那么一定会出错
	//程序中要避免野指针的存在，因为野指针是导致程序崩溃的主要原因
	//空指针的合法的，但野指针是危险的
	p = &a;
	*p = 1;
	printf("a = %d\n", *p);
	return 0;
}

int main05()
{
	int a = 2;
	int b = 4;
	int c = 7;
	int *p;
	p = &a;

	*p = 10;

	p = &b;
	*p = 20;

	p = &c;
	*p = 30;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
}

int main06()
{
	int a = 0x1310;
	char b = 2;
	int *p = &b;
	printf("%x\n", *p);

	/*
	重要：
	指针的兼容性：
		原则上一定是相同类型的指针指向相同类型的变量地址,
	不能用一种类型的指针赋值给另一种类型的变量
	*/
	char buf[10] = { 0x12, 0x34, 0x56, 0x78, 5, 6, 7, 8, 9, 10 };
	p = buf;//int类型的指针，认为四个字节是一个值
	printf("%x\n", *p);
	return 0;
}

//重要
int main07()//指针的兼容性
{
	float a = 3.14;
	int i = a;//自动数据类型转化，将浮点数的小数部分舍弃

	int *p = &a;//严重的错误，因为指针类型不兼容
	printf("%d\n", *p);
	return 0;

}
//只读指针  不能修改值
int main08()//指向常量的指针
{
	int a = 10;
	int b = 30;
	const int *p = &a;//p这个指针只能指向一个常量
	//*p = 20;//不能通过 *p的方法修改一个const指针
	a = 20;
	p = &b;
	printf("a = %d\n", *p);//*p是个只读的值，不能修改
	return 0;
}

int main()//常量指针  不能修改地址
{
	int a = 10;
	int b = 30;
	int *const p = &a;//定义一个常量指针,可以通过常量指针修改或者读取一个变量的值
	*p = 20;
	//p = &b;//错误，常量指针一旦定义了，那么就不能修改其指向的变量
	printf("a = %d\n", *p);
	return 0;

}