#include <stdio.h>

int main(void)
{
	char a[100];
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf_s("%s", a, sizeof(a));
	printf("%s", a);
	return 0;
}