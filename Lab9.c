#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
int r, c;

int task1()
{
	for (r = 1; r <= ROW; r++)
	{
		for (c = 1; c <= COL; c++)
			printf("%5d", c * r);
		printf("\n");
	}
		return 0;
}
int task2()
{
	for (r = 1; r <= ROW; r++)
	{
		for (c = 1; c <= r; c++)
			printf("%5d", c * r);
		printf("\n");
	}
	return 0;
}
int task3()
{
	int r, c;
	for (r = 1; r <= 5; r++)
	{
		for (c = 1; c <= 6 - r; c++)
			printf("%3d", 20 - r + c);
		printf("\n");
	}
	return 0;
}
int task4()
{
	long long n, m;
	int k, d;
	char a;
	do
	{
		printf("Введите число: ");
		scanf("%lld", &n);
		if (n < 0)
			n = -n;
		m = n;
		k = 0;
		while (m > 0)
		{
			d = m % 10;
			if (d == 3)
				k++;
				m = m / 10;
		}
		printf("Цифра 3 встречается %d раз\n", k);
		printf("Продолжить? (Да - у, Нет - n):");
		scanf(" %c", &a);
	} 
	while (a == 'y');
	return 0;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
	task4();
	return 0;
}