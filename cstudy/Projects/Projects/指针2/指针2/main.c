#include <stdio.h>

#pragma warning(disable:4996)
void print(char s[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("s[%d] = %d\n", i, s[i]);
	}
}

int main01()
{
	char buf[10] = { 0, 1, 2, 3, 4 };
	char *p = &buf;
	char *p1 = &buf[0];
	char *p2 = &buf[1];
	char *p3 = &buf[2];

	*p2 = 7;

	p3 += 1;//地址加1
	*p3 = 100;

	p3 -= 2;
	*p3 = 70;

	printf("%d, %d, %d, %d\n", p, p1, p2, p3);

	int i;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}

	//p已经指向的数组的最后一个成员了
	//p = buf;//将p的值重新指向了数组的首地址
	p -= 10;

	for (i = 0; i < 10; i++)
	{
		*p = i * 10;
		p++;
	}

	print(buf);
	return 0;

}

void ip2s(int n)
{
	unsigned char *p = &n;
	printf("%u.%u.%u.%u\n", *p, *(p + 1), *(p + 2), *(p + 3));


}

int s2ip(char s[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);
	//printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	int ip = 0;
	char *p = &ip;
	*p = a;
	p++;
	*p = b;
	p++;
	*p = c;
	p++;
	*p = d;
	return ip;
}



int main()//IP地址的保存方法,通过一个int传递IPv4的地址，可以保证4个字节足够了
{
	//"192.168.1.2";=11个字节
	//"234.213.222.231" = 15个字节
	//"1.1.1.1"=7个字节
	//IP在网络中传递的时候是一个DWORD,就是一个int
	int a = 0x12345678;
	char *p = &a;
	p++;
	p++;
	printf("%x\n", *p);

	//"192.168.6.252"
	int ip = 0;
	unsigned char *p1 = &ip;
	*p1 = 192;
	p1++;
	*p1 = 168;
	p1++;
	*p1 = 6;
	p1++;
	*p1 = 252;

	printf("ip = %d\n", ip);

	ip2s(ip);

	char s[100] = "192.168.2.3";
	int my_ip = s2ip(s);
	ip2s(my_ip);


	return 0;

}