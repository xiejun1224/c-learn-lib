#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()//递归
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d", a);
//	return 0;
//}
//int Fib(int n)//迭代
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d", a);
//	return 0;
//}
//编写一个函数实现n的k次方，使用递归实现。
//int A(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*A(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int c = A(n, k);
//	printf("%d", c);
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10)+DigitSum(n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int A(int n)//递归
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * A(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = A(n);
//	printf("%d", sum);
//	return 0;
//}
//int A(int n)//迭代
//{
//	int a = n;
//	int sum = 1;
//	for (int i = 0; i < n; i++)
//	{
//		sum *= a;
//		a--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = A(n);
//	printf("%d", sum);
//	return 0;
//}
//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n / 10 == 0)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		print(n % 10);
//		
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//汉诺塔问题递归
//void Move(char pos1, char pos2)
//{
//	printf("%c->%c ", pos1, pos2);
//}
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		Move(pos1,pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		Move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	
//	scanf("%d", &n);
//	 Hanoi(n, 'A', 'B','C');
//
//	return 0;
//}