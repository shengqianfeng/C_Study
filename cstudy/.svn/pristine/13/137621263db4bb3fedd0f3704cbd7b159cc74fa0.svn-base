#include <stdio.h>
#include <string.h>


/*
函数定义两种方式：
1 数使用前就定义这函数
2 明这个函数然后使用，使用代码后边定义这个函数
*/



//自定义函数 求数组有效字符串长度
int mystrlen(char s[]){//这里s叫形参
	int len = 0;
	while (s[len++]);
	len--;
	return len;
}


int max(int a, int b){//形参一定是变量不能是常量
	int c = (a > b) ? a : b;
	return c;
}

//声明无参数的函数,如果一个函数没有返回值，那么函数的返回值是void
void test(int n){
	n++;
	printf("test n=%d\n",n);//n=10
}
 
void mytest(char s[], int i){
	printf("%s,%d\n",s,i);
}

//如果c语言的一个函数没有明确标明函数返回类型，那么函数的返回类型就是int
mytest1(){
	return 10;
}

void mystrcat(char s1[], char s2[]){
	int len1 = 0;
	while (s1[len1++]);
	len1--;

	int len2 = 0;
	while (s2[len2++]);
	len2--;

	int i = 0;
	for ( i = 0; i < len2; i++)
	{
		s1[len1 + i] = s2[i];

	}
}


void test_str(char s[]){
	s[0] = 'a';
	s[1] = 'b';
}


int main(){

	char str1[100] = "hello";
	char str2[100] = "world";
	mystrcat(str1, str2);
	printf("%s\n", str1);//helloworld


	//如果函数的参数是个数组，那么可以通过形参修改实参的值的
//	char str1[100] = "hello";
	//test_str(str1);
	//printf("%s\n", str1);//abllo


	//printf("%d\n",mytest1());//10

//	mytest("AAAA",10);
	int val = 9;
	//在c语言中，实参和形参的数据传递是值传递,只能有实参传递给形参，不能形参传递给实参
	test(9);
	printf("value=%d\n",val);//9
	int a1 = 100;
	int a2 = 200;

	int a = max(a1-40, a2);
	//int a = max(35, 56);//实参可以是变量也可以是常量
	printf("%d\n", a);//56


	char s[] = "hello";
	//int len = strlen(s);
	int len =mystrlen(s);//s叫实参
	printf("%d\n", len);//5
	return 0;
}