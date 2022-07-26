#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')
	
		ch = ch + 32;
	
	printf("%c", ch);
	
	else
	
		printf("请输入一个正确的大写字母");
	
	return 0;
}