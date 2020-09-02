#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000;i++)
	{
		a[i] = -1 - i;//第一步是 -1减i(0)==-1
		printf("%d\n", a[i]);
	}
	printf("%d", strlen(a)); //算a的字符长度，答案为255，for循环游历了char的-128到127 一共255个数字，等于长度;
	return 0;
}