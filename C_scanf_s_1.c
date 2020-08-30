#include <stdio.h>

int main(void)
{
	char a[100];
	printf("이름을 입력하시오. : ");
	scanf_s("%s", a, sizeof(a));
	printf("%s", a);
	return 0;
}