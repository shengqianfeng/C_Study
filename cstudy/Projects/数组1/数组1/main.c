#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



/*
数组在内存中是一段连续的空间(调试查看)，数组内部类型一致
*/
int main1(){
	int array[10];//定义一个一维数组，名字叫array下标0-9,类型相同都是int
	array[0] = 20;
	array[1] = 30;
	array[9] = 80;

	//array[10] = 100;//会执行错误，下标越界
	printf("%d\n", array[1]);//30
	
	int i;
	for ( i = 0; i < 10; i++)
	{
		array[i] = i;

	}
	printf("%p\n", array);
	//printf("%d\n", sizeof(array));//40个字节即10个整数
	return 0;

}

int main2(){
	//数组定义同时初始化
	//int array[10] = {0,1,2,3,4,5,6,7,8,9};
	//将数组的前三个元素赋值，其余为0
	//int array[10] = { 5, 7, 9 };
	//所有元素都是0
	int array[10] = {0};
	int i;
	//通过键盘输入赋值数组并打印
	for (i = 0; i < 10; i++)
	{
		printf("请输入下标%d的值", i);
		scanf("%d", &array[i]);

	}

	for ( i = 0; i < 10; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);

	}


}

//求数组中最大元素的值
int main3(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (array[i]>max){
			max = array[i];
		}
	}
	printf("max is %d\n", max);
}

//求数组中最小元素的值
int main4(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	int min = 10;
	int index = 0;//默认第0个下标就是最小的
	for (int i = 0; i < 10; i++)
	{
		if (array[i] < min){
			min = array[i];
			index = i;
		}
	}
	printf("min is %d\n index=%d", min,index);
}


//求数组中元素之和
int main5(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	printf("sum is %d\n",sum);
}
//将数组元素逆序
int main(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	//int temp;
	//方法1
	/*for (int i = 0; i < 5; i++)
	{
		temp = array[i];
		array[i] = array[9 - i];
		array[9 - i] = temp;
	}*/

	//方法2
	int min = 0;//数组最小下标
	int max = 9;//数组最大下标
	while (min < max){
		int temp = array[min];
		array[min] = array[max];
		array[max] = temp;
		min++;
		max--;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", array[i]);
	}
	
}
