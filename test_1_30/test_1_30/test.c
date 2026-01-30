#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int num[3] = { 0 };
//	int sz = sizeof(num) / sizeof(num[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int ans[6] = { 0 };
//	memcpy(ans, num, sz*sizeof(int));
//	memcpy(ans + sz, num, sz * sizeof(int));
//	for (int i = 0; i < 2*sz; i++)
//	{
//		printf("%d ", ans[i]);
//	}
//	return 0;
//}
#include<stdlib.h>
#include<assert.h>
//练习使用malloc
//void test()
//{
//	int*p = (int*)malloc(5 * sizeof(int));
//	assert(p);
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", p[j]);
//	}
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}
//练习使用calloc
//void test2()
//{
//	int* p = NULL;
//	p = (int*)calloc(5, sizeof(int));
//	assert(p);
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", p[j]);
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test2();
//	return 0;
//}
//练习使用realloc
//void test3()
//{
//	int* p = NULL;
//	p = (int*)malloc(5 * sizeof(int));
//	assert(p);
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	int* str = NULL;
//	str = (int*)realloc(p, 10 * sizeof(int));
//	assert(str);
//	p = str;
//	for (int i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	
//}
//int main()
//{
//	test3();
//	return 0;
//使用malloc函数模拟开辟一个3 * 5的整型二维数组，开辟好后，使用二维数组的下标访问形式，访问空间。
//void test4()
//{
//	int(* p)[5] = NULL;
//	p = (int(*)[5])malloc(3 * sizeof(int(*)[5]));
//	//p = (int(*)[5])malloc(3 * 5 * sizeof(int));
//	assert(p);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//*(p[i]+j) = j;
//			//p[i][j] = j;
//			*(*(p+i) + j) = j;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(p[i]+j));
//			//printf("%d ", p[i][j]);
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test4();
//	return 0;
//}
//易错题1.
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}