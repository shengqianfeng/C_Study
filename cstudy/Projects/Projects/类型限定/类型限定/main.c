
#include <stdio.h>

/*
�ؼ��֣�
volatile�����������һ��cpu֮��ĵط��ı�
*/
int main(){
	//volatile���߱�������Ҫ���������������Ż�����
	volatile  int i = 100;
	i = i + 5;
	//�ⲿ�豸����i��ֵ
	i = i +10;
	i = i + 30;
	//volatile������ӵĻ������������Ż���������
	//i = i + 45;
	printf("%d\n", i);


	//����j�������ڴ��У�������cpu�ļĴ����У�����register�ǽ�����ָ������������͵�
	register int j = 100;
	j = j + 50;
	j = j + 20;
	printf("%d\n", j);
	return 0;
}