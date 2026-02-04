#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max(x,y) ((x)+(y))
//int main()
//{
//	int a = 4;
//	int b = 6;
//	int m = max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


#define print(n,format) printf("the value of "#n" is" format"\n" ,n)
//int main()
//{
//	int a = 1;
//	printf("the value of a is %d\n", a);
//	int b = 2;
//	printf("the value of b is %d\n", b);
//	float c = 3.3;
//	printf("the value of c is %f\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	print(a, "%d");
//	int b = 2;
//	print(b, "%d");
//	float c = 3.3;
//	print(c, "%f");
//	return 0;
//}


//#define gener(type)\
//type type##_max(type x,type y)\
//{\
//return x>y?x:y;\
//}
//
//
//gener(int);
//gener(float);
//int main()
//{
//	int a = 3;
//	int b = 4;
//	float c = 5.4;
//	float d = 4.6;
//	int e=int_max(a, b);
//	printf("%d\n", e);
//	float f = float_max(c, d);
//	printf("%f\n", f);
//	printf("%c\n", __TIME__);
//	return 0;
//}


#if 0
#include<stddef.h>
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//
//考察：offsetof宏的实现
struct S
{
	char c;
	int a;
};
int main()
{
	int n=offsetof(struct S, c);
	printf("%d\n", n);
	int ret = offsetof(struct S, a);
	printf("%d\n", ret);
	
	return 0;
}
#endif




#if 0
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
#define my_offsetof(S,n) (size_t)&(((S*)0)->n)
struct S
{
	char c;
	int a;
};
int main()
{
	int a = my_offsetof(struct S, c);
	printf("%d\n",a);
	int ret = my_offsetof(struct S, a);
	printf("%d\n", ret);
	return 0;
}
#endif



#define MY_SWAP(a) ((((a)&(0x55555555))<<1)|(((a)&(0xaaaaaaaa))>>1))
int main()
{
	int a = MY_SWAP(13);
	printf("%d", a);
	return 0;
}