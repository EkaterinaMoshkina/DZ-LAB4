#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int A, B;
	puts("игрок А нажал на число:");
	scanf("%d", &A);
	puts("игрок В нажал на число:");
	scanf("%d", &B);
	if (A % 2 == 0)
	{
		if (B % 2 == 0)
		{
			puts("проигрыш");
		}
		else
		{
			puts("победа");
		};
	}
	else
	{
		if (B % 2 == 0)
		{
			puts("победа");
		}
		else
		{
			puts("проигрыш");
		}
	}
}