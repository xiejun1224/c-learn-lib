#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//以二进制的形式写入
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(arr, sizeof(int), sz, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 
// 
//#include<string.h>
//int main()
//{
//	char arr[20] = "xiejun";
//	int len = strlen(arr);
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(arr, sizeof(char), len, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//以二进制的方式读取数据
//int main()
//{
//	int arr[20] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(arr, sizeof(int), sz, pf);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 
// 
// fprintf写入文件
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "谢军",21,100 };
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
// 
//fscanf读取数据
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = NULL;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	//printf("%s %d %f", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
// 
// 
//sscanf和sprintf的使用
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	char arr[200] = { 0 };
//	struct S s = { "张三",25,68.8};
//	//把格式化数据转换成字符串
//	sprintf(arr,"%s %d %f", s.name, s.age, s.score);
//	//按照字符串的形式打印
//	printf("%s\n", arr);
//	struct S t = { 0 };
//	//把字符串转换成格式化数据
//	sscanf(arr, "%s %d %f", t.name, &(t.age), &(t.score));
//	//按照格式打印
//	printf("%s %d %f", t.name, t.age, t.score);
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
//	for (char i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fseek,ftell,rewind的用法
//int main()
//{
//	FILE* pf = NULL;
//	char arr[20] = { 0 };
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	//fseek(pf, 5, SEEK_CUR);
//	//fseek(pf,-5, SEEK_END);
//	fseek(pf, 5, SEEK_SET);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	int sz = ftell(pf);
//	printf("%d\n", sz);
//	rewind(pf);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{
	FILE* pf = NULL;
	char arr[20] = { 0 };
	pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int c = 0;
	while ((c=getc(pf)) != EOF)
	{
		printf("%c ", c);
	}
	printf("\n");
	if (feof(pf))
	{
		printf("遇到文件末尾读取正常\n");
	}
	 if (ferror(pf))
	{
		printf("读取失败\n");
		perror("getc");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}