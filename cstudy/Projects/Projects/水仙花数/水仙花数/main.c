#include <stdio.h>

/*
ˮ�ɻ�����
	һ��nλ����n>=3������ÿһ��λ�ϵ����ֵ�n����֮�͵������������ 
	��100��999֮������е�ˮ�ɻ�����ӡ����
	*/
int main1(){
	int i;
	for (i = 100; i < 1000; i++){
		int i1 = i % 10;  //��λ
		int i2 = i/10 % 10;  //ʮλ
		int i3 = i / 100;  //��λ
		if ((i1*i1*i1 + i2*i2*i2 + i3*i3*i3) == i){
			printf("%d\n" , i);
		}
	}



	return 0;
}

//��һ��int�����У���������Ԫ�صĺ�
int main2(){
	int array[10] = {2,4,3,78,13,12,5,9,10,15};
	int i ;
	int sum = 0;
	for ( i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 1){
			sum += array[i];
		}

	}
	printf("sum=%d\n", sum);
	return 0;
}

//���3��100֮������е�����
//����������1�����������ܱ�����������
int main(){
	for (int i = 3; i < 100; i++)
	{	
		int status = 0;
		for (int j = 2; j < i; j++){
			if (i%j == 0){
				status = 1;
				break;//�����ڲ�ѭ��
			}
		}
		if (status == 0){
			printf("%d\n", i);
		}


	}

	return 0;
}