#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[3][4]={ 0 };
//	printf("%d\n", sizeof(*(a[0] + 1)));
//
//	return 0;
//}
//模拟实现strlen
// 计数器的形式
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
// 函数的递归方式
//int my_strlen(char* arr)
//{
//	if (* arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}		
//}
// 指针减指针
//int my_strlen(char* arr)
//{
//	char* p = arr;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - arr;
//}
//int main()
//{
//	char arr[] = "hellow world";
//	int ret= my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//strcpy的模拟实现
#include<assert.h>
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = *p2;
//	return ret;
//}
// 优化后
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++=*p2++)
//	{
//		;
//	}
//	return ret;
//}
// int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "world";
//	char* p = my_strcpy(arr1, arr2);
//	printf("%s\n", p);
//	printf("%s\n", arr1);
//	return 0;
// }
//strcat的模拟实现
//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1&& p2);
//	char* ret = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = *p2;
//	return ret;
//}
//优化后
char* my_strcat(char* p1, const char* p2)
{
	char* ret = p1;
	while (*p1 != '\0')
	{
		p1++;
	}
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hellow ";
	char arr2[] = "world";
	char* ret = my_strcat(arr1,arr2);
	printf("%s\n", ret);
	printf("%s\n", arr1);
	return 0;
}