#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int cmp_r(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int arr[], int sz)
//{
//	
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test()
//{
//	int arr[] = { 3,6,9,2,1,0,4,7,5,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_r);
//	print(arr, sz);
//}
//int main()
//{
//	test();
//	
//	return 0;
//}
//void Swap(char* b1, char* b2, size_t width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tem = *b1;
//		*b1 = *b2;
//		*b2 = tem;
//		b1++;
//		b2++;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_int(const void*p1,const void*p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* p1, const void* p2))
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr, sz);
//}
//
//int main()
//{
//	test1();
//	
//	return 0;
//}
//void Swap(char*b1,char*b2,size_t width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *b1;
//		*b1 = *b2;
//		*b2 = tmp;
//		b1++;
//		b2++;
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* p1, const void* p2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for(int j=0;j<sz-1-i;j++)
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//	}
//}
//void print(int arr[], size_t sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d   ", arr[i]);
//	}
//}
//void test2()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr,sz);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//
//}
//int cmp_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	struct Stu arr[3] = { {"zhangsan",20},{"lisi",18},{"wangwu",39} };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	int arr2[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int szz = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_by_age);
//	qsort(arr2, szz, sizeof(arr2[0]), cmp_int);
//	print(arr2, szz);
//	return 0;
//}
//qsortÄ£ÄâÊµÏÖ
struct Stu
{
	char name[20];
	int age;
};
void Swap(char* b1, char* b2,size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tem = *b1;
		*b1 = *b2;
		*b2 = tem;
		b1++;
		b2++;		
     }
}
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
}
int cmp_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}
void test()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu arr1[3] = { {"zhangsan",18},{"lisi",16},{"wangwu",28} };
	int szz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	bubble_sort(arr1, szz, sizeof(arr1[0]), cmp_by_name);
	bubble_sort(arr1, szz, sizeof(arr1[0]), cmp_by_age);
	print(arr, sz);
}
int main()
{
	test();
	return 0;
}