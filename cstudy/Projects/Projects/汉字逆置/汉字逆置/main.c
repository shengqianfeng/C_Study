#include <stdio.h>

//汉字字符串逆置
int main1(){


	/*
	ACSII：一个字节存放一个字符
	GBK：两个字节存放一个汉字
	UTF8：三个字节存放一个汉字
	*/
	//判断字符是汉字还是字母的方式
	char buf[] = "你好世界";//gbk编码的汉字
	printf("%d\n", buf[0]);//-60 汉字的第一个字节是负数

	char buf1[] = "a你好世界";
	printf("%d\n", buf1[0]);//97 字母的第一个字节是ASCII，是正数


	return 0;

	int len = 0;
	while (buf[len++]);
	len--;
	printf("%d\n", len);//8
	printf("%d\n", sizeof(buf));//9

	//windows下使用gbk的做法
	
	int min = 0;
	int max = len - 1;
	while (min < max){
		//min和max-1调换位置
		char temp = buf[min];
		buf[min] = buf[max-1];
		buf[max-1] = temp;
		//min+1和max-1调换位置
		temp = buf[min+1];
		buf[min+1] = buf[max];
		buf[max] = temp;
		min+=2;
		max-=2;
	}
	//练习：在linux下使用utf8做法
	
	printf("%s\n", buf);//界世好你
	
	return 0;
}


int main(){

	char buf[100] = "你好abc";
	int len = 0;
	while (buf[len++]);
	len--;
	//求有效字节数
	printf("%d\n", len);//7
	

	//求有效字符数
	len = 0;
	int i = 0;
	while (buf[i]){
		if (buf[i] < 0){//是汉字 i加1跳一位字节
			i++;
			
		}
		//非汉字，正常的ASCII，则统计长度len加1
		i++;//i也进一位
		len++;//用来统计长度
	}
	printf("%d\n", len);//5

}