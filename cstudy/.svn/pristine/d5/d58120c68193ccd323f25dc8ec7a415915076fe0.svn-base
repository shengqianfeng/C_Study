#include <stdio.h>

/*
水仙花数：
	一个n位数，n>=3，它的每一个位上的数字的n次幂之和等于这个数本身 
	将100到999之间的所有的水仙花数打印出来
	*/
int main1(){
	int i;
	for (i = 100; i < 1000; i++){
		int i1 = i % 10;  //个位
		int i2 = i/10 % 10;  //十位
		int i3 = i / 100;  //百位
		if ((i1*i1*i1 + i2*i2*i2 + i3*i3*i3) == i){
			printf("%d\n" , i);
		}
	}



	return 0;
}

//求一个int数组中，所有奇数元素的和
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

//求从3到100之间的所有的素数
//素数：除了1和它本身，不能被其他数整除
int main(){
	for (int i = 3; i < 100; i++)
	{	
		int status = 0;
		for (int j = 2; j < i; j++){
			if (i%j == 0){
				status = 1;
				break;//跳出内层循环
			}
		}
		if (status == 0){
			printf("%d\n", i);
		}


	}

	return 0;
}