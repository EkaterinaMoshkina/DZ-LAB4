#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int A, B;
	puts("����� � ����� �� �����:");
	scanf("%d", &A);
	puts("����� � ����� �� �����:");
	scanf("%d", &B);
	if (A % 2 == 0)
	{
		if (B % 2 == 0)
		{
			puts("��������");
		}
		else
		{
			puts("������");
		};
	}
	else
	{
		if (B % 2 == 0)
		{
			puts("������");
		}
		else
		{
			puts("��������");
		}
	}
}