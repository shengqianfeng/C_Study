#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main1(){

	char s[100] = "hello world";
	//提取字符串长度
	int len = strlen(s); 
	//只返回字符串中有效字符长度，不包含字符串结束符0
	printf("len=%d\n", len);

	char s1[100] = "abc123456789";
	//在s字符串后追加字符串s1，结果放到s中，这个函数也不安全有缓冲区溢出风险
	//strcat(s, s1);
	//给s数组追加字符串，限制追加6个字符，多余的拒绝，这个函数是安全的，不存在缓冲区溢出问题
	strncat(s, s1, 6);


	printf("%s\n", s);





	return 0;
}

//比较字符串相等
int main2(){
	/*char s1[100]="hello";
	char s2[100] = "hello";
	//if (s1 == s2);//错误的模型，字符串不能通过等号比较
	if (strcmp(s1, s2) == 0)//如果返回值为0代表参数中的两个字符串内容相等
	{
		printf("相等\n");
	}
	else{
		printf("不相同\n");
	}*/


	char s1[100] = "123456";
	char s2[100] = "abcdef";
	//if (s1 == s2);//错误的模型，字符串不能通过等号比较
	if (strncmp(s1, s2,5) == 0)//strncmp只比较前五个字符，如果返回值为0代表参数中的两个字符串内容相等
	{
		printf("相等\n");
	}
	else{
		printf("不相同\n");
	}

	//将s2的内容拷贝到s1
//	strcpy(s1, s2);
	//将s2的前3个字符拷贝到s1中，s1的后边不变
	//strncpy(s1, s2,3);
	//printf("%s\n", s1);//abc456



	return 0;
}

//字符串和整数的转换
int main3(){

	int i = 200;
	//itoa();//不是标准的c语言库函数
	//atoi;//字符串转整数，atoi是标准的c语言库函数
	char s[100] = { 0 };
	sprintf(s,"i=%d",i);//将格式化后的字符串输出到第一个参数指定的字符串参数s中
	printf("%s\n", s);//i=200
	return  0;
}

//字符串操作函数
int main4(){

	/*char s[100] = "abc=100";
	int i=0;
	sscanf(s, "abc=%d", &i);
	printf("%d\n", i);//100
	*/
	//使用sscanf计算加减法
	char s[100] = "5+6=";
	int  a = 0;
	int b = 0;
	sscanf(s, "%d+%d", &a, &b);
	printf("%d\n", a+b);

	strcpy(s,"hello world");
	/*在s这个字符串中间，查找第二个参数指定的字符，找不到返回null，
	找到则从找到的位置返回到最后之间的字符串
	*/
	char *buf = strchr(s, 'o');
	printf("%s\n", buf); // o world
	
	buf = strstr(s, "ll");
	printf("%s\n", buf); // llo world
	

	strcpy(s, "abc_12345_ee");//将字符串中所有的_符号分割的子串拿出来

	//strtok第一次调用的时候第一个参数时字符串，但第二次调用的时候，第一个参数时NULL
	buf = strtok(s, "_");
	while (buf){
		printf("%s\n", buf);//12345
		buf = strtok(NULL, "_");//如果strtok没有找到指定的分割符号，那么返回NULL
	}


	return 0;
}

//将字符串转化为整数
int main(){
	char s[100] = "200";
	//实现字符串向int型的转化
	int i = atoi(s);
	printf("i=%d\n", i);//i=200

	int len = 0;
	char arr[100] = "中国abc";
	while (arr[len++]);//求字符串的有效字节长度
	len--;
	/*
	当arr数组指定了大小的时候arr是字符串，len是7；sizeof是100
	当arr数组没有指定大小的时候，len是7；sizeof是8
	*/
	printf("%d\n", len);
	printf("%d\n", sizeof(arr));
	
	printf("-----------------\n");
	
	int len1 = 0;
	char arr1[] = { '中','国','a','b','c' };
	//求字符串的有效字节长度
	while (arr1[len1++]);
	len1--;
	printf("%d\n", len1);//17个字节 
	printf("%d\n", sizeof(arr1));//5个元素
	//char是c语言中的最小单位
	char c =  '中';
	printf("%d\n", sizeof(c));//1字节 sizeof中是char类型1个字节 
	printf("%d\n", sizeof('中'));//4字节 sizeof中是int类型，四个字节
	return 0;
}