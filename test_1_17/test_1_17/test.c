#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void FindNum(int arr[], int n, int* pnum1, int* pnum2)
//{
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp ^= arr[i];
//	}
//	int k = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) != 0)
//		{
//			k = i;
//			break;
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (((arr[i] >> k) & 1) != 0)
//		{
//			*pnum1 ^= arr[i];
//		}
//		else
//		{
//			*pnum2 ^= arr[i];
//		}
//	}
//	printf("%d %d", *pnum1, *pnum2);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	FindNum(arr, len, &x, &y);
//	return 0;
//}
//int Day(int year, int month)
//{
//	int arr[]={ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = arr[month];
//	if((year%4==0&&year%100!=0)||(year%400==0))
//	{
//		if (month == 2)
//		{
//			day += 1;
//		}
//     }
//	return day;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = Day(year, month);
//		printf("%d\n", day);
//	}
//	
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***0.exit *********\n");
//	printf("***1.add  *********\n");
//	printf("***2.sub  *********\n");
//	printf("***3.mul  *********\n");
//	printf("***4.div  *********\n");
//	printf("请输入\n");
//}
//int main()
//{
//	int input = 0;
//	int(*p[5])(int,int) = {0,add,sub,mul,div};
//	do
//	{		
//		menu();
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请输入两个操作数");
//			int x = 0;
//			int y = 0;
//			scanf("%d %d", &x, &y);
//			int z = p[input](x, y);
//			printf("%d\n", z);
//
//		}
//		else
//			if (input == 0)
//			{
//				printf("退出计算器\n");
//			}
//			else
//				printf("输入错误，请重新输入\n");
//	} while (input);
//	
//	return 0;
//}
//int main()
//{
//	char str1[10] = { 0 };
//	char* str2 = "abcd";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	char str3[100] = "ab";
//	char* str4 = "hellow bit";
//	strncat(str3,str4,2);
//	printf("%s\n", str3);
//
//	return 0;
//}
//void LeftRound(char* str, int k)
//{
//	int len = strlen(str);
//	int time = k % len;
//	for (int i = 0; i < time; i++)
//	{
//		int tem = str[0];
//		int j = 0;
//		for ( j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = tem;
//
//	}
//	printf("%s\n", str);
//
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	LeftRound(arr, k);
//	return 0;
//}
//void LeftRound(char* str, int k)
//{
//	int len = strlen(str);
//	int time = k % len;
//	char tem[1000] = { 0 };
//	strcpy(tem, str+time);
//	strncat(tem, str, time);
//	strcpy(str, tem);
//	printf("%s\n", str);
//
//
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	LeftRound(arr, k);
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int LeftRound(char* arr, char* arr2)
//{
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		int j = 0;
//		int tem = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tem;
//		if (strcmp(arr, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = "AABCD";
//	char* arr2 = "BCDAA";
//	int ret=LeftRound(arr, arr2);
//	if (ret == 1)
//	{
//		printf("是旋转的结果");
//	}
//
//	return 0;
//}
//void LeftRound(char* arr, char* arr2)
//{
//	char tem[1000] = { 0 };
//	strcpy(tem, arr);
//	strcat(tem, arr);
//	char* p = strstr(tem, arr2);
//	if (p != NULL)
//	{
//		printf("是旋转的结果");
//	}
//	else
//	{
//		printf("不是旋转的结果");
//	}
//}
//int main()
//{
//
//	char arr[] = "AABCD";
//	char* arr2 = "BCDAAF";
//	LeftRound(arr, arr2);
//	return 0;
//}
//int Findnum(int arr[][3], int x, int y, int k)
//{
//	int i = 0;
//	int j = y - 1;
//	while ((i < x) && (j >= 0))
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else
//			if (arr[i][j] > k)
//			{
//				j--;
//			}
//			else
//			{
//				return 1;
//			}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	scanf("%d", &k);
//	int q=Findnum(arr, 3, 3, k);
//	if (q == 1)
//	{
//		printf("存在矩阵中");
//	}
//	else if (q == 0)
//	{
//		printf("不存在矩阵中");
//	}
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//
//
//以下为4个嫌疑犯的供词:
//
//
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说
//
//已知3个人说了真话，1个人说的是假话。
//
//
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//void Func()
//{
//	for (char killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer是%c\n", killer);
//		}
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}
//在屏幕上打印杨辉三角。
//
//
//
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
void YangHui(int arr[][4], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if ((j == 0) || (i == j))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}
void print(int arr[][4],int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[4][4] = { 0 };
	
	YangHui(arr, 4);
	print(arr, 4);
	return 0;
}
