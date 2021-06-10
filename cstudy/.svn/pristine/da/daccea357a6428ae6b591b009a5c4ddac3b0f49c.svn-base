
#include <stdio.h>

/*
关键字：
volatile：代表变量被一个cpu之外的地方改变
*/
int main(){
	//volatile告诉编译器不要给我针对这个变量优化代码
	volatile  int i = 100;
	i = i + 5;
	//外部设备改了i的值
	i = i +10;
	i = i + 30;
	//volatile如果不加的话，编译器会优化上述代码
	//i = i + 45;
	printf("%d\n", i);


	//变量j不是在内存中，而是在cpu的寄存器中，但是register是建议型指令。而不是命令型的
	register int j = 100;
	j = j + 50;
	j = j + 20;
	printf("%d\n", j);
	return 0;
}