#include <stdio.h>
MAX(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
		scanf_s("%d%d", &num1, &num2);
		num3 = MAX(num1, num2);
	printf("num3 = %d",num3);
	return 0;//计算两个数相加
}