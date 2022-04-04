#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	printf("%d", i);
//	return 0;
//}
////结构成员访问操作符
//struct Book {
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main() {
//	struct Book a = { "C语言","C20220404",55 };
//	struct Book * pa=&a;
//	printf("书名>%s\n", a.name);
//	printf("id>%s\n", pa->name);
//	
//	return 0;
//
//}
//int fun() {
//	static int count = 1;
//	return ++count;
//}
//int main() 
//{
//	int a = 0;
//	a = fun() - (fun()) * fun();
//	printf("%d", a);
//	return 0;
//	}
//void maopao(int arr[], int size) {
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < size; j++)
//	{
//		for (i = 0; i < size-j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int a = 0;
//				a = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = a;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int size = 10;
//	maopao(arr, size);
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int arr[], int size) {
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[],int size) {
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int size) {
//	int left = 0;
//	int right = size - 1;
//	int mid = (left + right) / 2;
//	while (left <= right) {
//		int a = 0;
//		a = arr[right];
//		arr[right] = arr[left];
//		arr[left] = a;
//		left++;
//		right--;
//	}
//
//
//}
//
//int main() {
//	int arr[] = { 1,3,5,7,9,11,13 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	init(arr, size);
//	print(arr, size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("请输入第%d位数据>", i);
//		scanf("%d", &arr[i]);
//	}
//	print(arr, size);
//	reverse(arr, size);
//	print(arr, size);
//	return 0;
//}



 