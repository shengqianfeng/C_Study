#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



/*
�������ڴ�����һ�������Ŀռ�(���Բ鿴)�������ڲ�����һ��
*/
int main1(){
	int array[10];//����һ��һά���飬���ֽ�array�±�0-9,������ͬ����int
	array[0] = 20;
	array[1] = 30;
	array[9] = 80;

	//array[10] = 100;//��ִ�д����±�Խ��
	printf("%d\n", array[1]);//30
	
	int i;
	for ( i = 0; i < 10; i++)
	{
		array[i] = i;

	}
	printf("%p\n", array);
	//printf("%d\n", sizeof(array));//40���ֽڼ�10������
	return 0;

}

int main2(){
	//���鶨��ͬʱ��ʼ��
	//int array[10] = {0,1,2,3,4,5,6,7,8,9};
	//�������ǰ����Ԫ�ظ�ֵ������Ϊ0
	//int array[10] = { 5, 7, 9 };
	//����Ԫ�ض���0
	int array[10] = {0};
	int i;
	//ͨ���������븳ֵ���鲢��ӡ
	for (i = 0; i < 10; i++)
	{
		printf("�������±�%d��ֵ", i);
		scanf("%d", &array[i]);

	}

	for ( i = 0; i < 10; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);

	}


}

//�����������Ԫ�ص�ֵ
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

//����������СԪ�ص�ֵ
int main4(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	int min = 10;
	int index = 0;//Ĭ�ϵ�0���±������С��
	for (int i = 0; i < 10; i++)
	{
		if (array[i] < min){
			min = array[i];
			index = i;
		}
	}
	printf("min is %d\n index=%d", min,index);
}


//��������Ԫ��֮��
int main5(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	printf("sum is %d\n",sum);
}
//������Ԫ������
int main(){
	int array[10] = { 32, 45, 634, 12, 56, 2, 78, 22, 69, 10 };
	//int temp;
	//����1
	/*for (int i = 0; i < 5; i++)
	{
		temp = array[i];
		array[i] = array[9 - i];
		array[9 - i] = temp;
	}*/

	//����2
	int min = 0;//������С�±�
	int max = 9;//��������±�
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
