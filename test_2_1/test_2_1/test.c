#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//以读的形式打开文件
//int main()
//{
//	FILE* pf = NULL;
//	pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 以写的形式打开文件
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//写入文件
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputc('a', pf);
//	fputc('b', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (char i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//读字符文件
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch=fgetc(pf);
//	printf("%c\n", ch);
//    int ah= fgetc(pf);
//	printf("%c\n", ah);
//    int bh = fgetc(pf);
//	printf("%c\n", bh);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//写字符串文件
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hellow world\n", pf);
//	fputs("hellow bite", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//读字符串
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20] = { 0 };
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20] = { 0 };
//	while ((fgets(arr, 20, pf)) != NULL)
//	{
//		printf("%s", arr);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//使用所学文件操作，在当前目录下放一个文件data.txt，写一个程序，将data.txt文件拷贝一份，生成data_copy.txt文件。
//
//基本思路：
//
//打开文件data.txt，读取数据
//打开文件data_copy.txt，写数据
//从data.txt中读取数据存放到data_copy.txt文件中，直到文件结束。
//关闭两个文件
int main()
{
	FILE* pf1 = NULL;
	pf1 = fopen("date.txt", "r");
	if (pf1 == NULL)
	{
		perror("fopen");
		return 1;
	}
	char arr[20] = { 0 };
	fgets(arr, 20, pf1);
	FILE* pf2 = NULL;
	pf2 = fopen("date_copy.txt", "w");
	if (pf2 == NULL)
	{
		perror("fopen");
		return 2;
	}
	fputs(arr, pf2);
	fclose(pf1);
	fclose(pf2);
	pf1 = NULL;
	pf2 = NULL;
	return 0;
}