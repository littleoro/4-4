#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 30
#include<stdio.h>
//编写一个程序看是否是自守数5*5=25
int solve_length(int x) {
	if (x == 0) {
		return 0;
	}
	int count = 1;
	while (x / 10!=0) {
		count++;
		x = x / 10;
	}
	return count;
}

void tiqu_last(int a[], int y,int x_length) {
	int count = x_length;
	int i = 0;
	while (count != 0) {
		a[i] = y % 10;
		y = y / 10;
		count--;
		i++;
	}
}
int jiecheng(int i) {
	if (i == 0)
		return 1;
	int x = 1;
	while (i > 0) {
			x = x * 10;
			i--;
		}
	return x;
}

int qiushuzi(int a[MAX], int x_length) {
	if (x_length == 1)
		return a[0];
	int i = 0;
	int b = 0;
	for (i = 0; i < x_length; i++) {
		b = b + a[i] * jiecheng(i);
	}
	return b;
}
int main()
{
	int x = 0;
	for (x = 0; x < 10000; x++)
	{
		int x_length = solve_length(x);
		int y = x * x;
		int a[MAX] = { 0 };
		tiqu_last(a, y, x_length);
		int z = qiushuzi(a, x_length);
		if (x == z) {
			printf("%d ", z);
		}
	}
	return 0;
}