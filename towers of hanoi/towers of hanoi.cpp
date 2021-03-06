// towers of hanoi.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void hanoi(int n, char a, char b, char c);
int main()
{
	int n;
	printf("请输入盘数\n");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
    return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("Move sheet %d from %c to %c\n", n, a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("Move sheet %d from %c to %c\n", n, a, c);
		hanoi(n - 1, b, a, c);
	}
}
