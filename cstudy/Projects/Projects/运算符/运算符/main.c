#include <stdio.h>

//�����
int main1(){
	int a = 10;
	int b = 3;
	int c = a*b;

	printf("c=a*b=%d\n", c);//30


	 c = a/b;
	 printf("c=a/b=%d\n", c);//3

	// b = 0;
	 //c = a / b;
	 //printf("c=a/b=%d\n", c);//��������
	 c = a % b;
	 printf("c=a%%b=%d\n", c);//ȡ��1

	 //�������ֵȼ�
	 a = a + 5;
	 a += 5;
	 a++;
	 a--;
	 int f = 5;
	int  g = f++ + ++f;
	//�൱��
	/*f = f + 1;
	int g = f + f;
	f = f + 1;
	*/
	 printf("%d\n", g);//12
	 printf("%d\n", f);//7


	 return 0;
}

//���ȼ�
int main(){
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;
	int i = (a = b, a + d);
	printf("i=%d\n", i);//8

	a = 2; b = 3; c = 4; d = 5;
	i = a + b - c*d;
	printf("i=%d\n", i);//-15

	i = a = b = c;
	printf("i=%d\n", i);//4

	{
		i = 100;
		a = 30;
	}
	printf("i=%d\n", i);//100
	//ֻ��һ�����ŵ������ǿ���䣬�������c��������ǺϷ��ģ�������ĳЩ�����Ǳ��õ�
	//�����
	/*for (;;)
	{

	}*/
	for (i = 0; i < 3; i++){
		printf("hello\n");
	}
	//(double)3������3ǿ��ת��Ϊdouble
	double f = (double)3 / 2;
	f = 3.0 / 2;//���ϱ߽��һ��
	printf("%f\n", f);//1.50000

	int m = 3;
	int n = 2;
	double k = (double)m / n;
	printf("%f\n", k);//1.50000

	return 0;
}