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
	
		printf("������һ����ȷ�Ĵ�д��ĸ");
	
	return 0;
}