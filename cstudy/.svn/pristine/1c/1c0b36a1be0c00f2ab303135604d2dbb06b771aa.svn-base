#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// char *p = malloc(10);//开房，但没做清洁
	char *p1 = calloc(10, sizeof(char));//开房之后，酒店自动做清洁
	//memset(p, 0, 10);

	//char *p2 = realloc(p1, 20);//在原有内存基础之上，在堆中间增加连续的内存
	//如果原有内存没有连续空间可扩展，那么会新分配一个空间，将原有内存copy到新空间，然后释放原有内存
	//realloc和malloc，只分配内存，但不打扫

	//char *p2 = calloc(10, sizeof(char));//开房之后，酒店自动做清洁

	//char *p2 = realloc(p1, 5);

	char *p2 = realloc(NULL, 5);//等于malloc(5);

	int i;
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", p2[i]);
	}

	free(p2);

	return 0;
}

