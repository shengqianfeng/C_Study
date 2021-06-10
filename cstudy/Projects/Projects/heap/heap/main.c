#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}
}

int *geta()//错误，不能将一个栈变量的地址通过函数的返回值返回
{
	int a = 0;
	return &a;
}

int *geta1()//可以通过函数的返回值返回一个堆地址，但记得，一定要free
{
	int *p = malloc(sizeof(int));//申请了一个堆空间
	return p;
}

int *geta2()//合法的
{
	static int a = 0;
	return &a;
}


int main01(void)
{
	int *getp = geta2();

	*getp = 100;
	//free(getp);



	int array[10] = { 0 };
	int *p = (int *)malloc(sizeof(int)* 10000000);//在堆中间申请内存，在堆中申请了一个10个int这么大的空间

	memset(p, 0, sizeof(int)* 10);
	int i;
	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	print_array(p, 10);




	char *p1 = malloc(sizeof(char)* 10);//在堆中申请了一个10个char这么大的空间

	free(p);//释放通过malloc分配的堆内存

	free(p1);//释放通过malloc分配的堆内存

	printf("Hello World!\n");
	return 0;
}


void getheap(int *p)
{

	printf("p = %p\n", &p);
	p = malloc(sizeof(int)* 10);
	//    p[0] = 1;
	//    p[1] = 2;

}//getheap执行完以后,p就消失了，导致他指向的具体堆空间的地址编号也随之消失了

void getheap1(int **p)
{
	*p = malloc(sizeof(int)* 10);
}

void getheap3(int *p)
{
	p = malloc(sizeof(int)* 10);
}

//内存页越小，OS效率越低，内存浪费越小；内存页越大，OS效率越高，内存越浪费。
int main02()
{
	int *pp = malloc(10);
	//int *pp = malloc(12);
	//4k, 3.9k  0.3  8k

	int i = 0;
	scanf("%d", &i);
	//int array[i];//定义数组的时候，必须是常量，而不能是变量
	int *array = malloc(sizeof(int)* i);//在堆当中动态创建一个int数组

	free(array);

	int *p = NULL;
	printf("p = %p\n", &p);
	getheap(p);//实参没有任何改变
	//getheap1(&p);//得到了堆内存的地址
	printf("p = %d\n", p);

	//p = malloc(sizeof(int) * 10);
	p[0] = 1;
	p[1] = 2;
	printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
	free(p);
	return 0;
}

int main()
{
	 
	while (1)
	{
		int *p = malloc(100);
		getchar();
	}
	return 0;
}

