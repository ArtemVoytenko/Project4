#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int z1() 
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Задание 1:\n1) %c\n", c);
	printf("2) %d\n", i);
	printf("3) %f\n", f);
	printf("4) %e\n", d);
}
int z1a() 
{
	float num;
	printf("\nЗадание 1а:\nВведите вещественное число: ");
	scanf("%f", &num);
	int cel = (int)num;
	float ost = num - cel;
	printf("Целая часть: %d\n", cel);
	printf("Дробная часть: %f\n", ost);
}
int z1b() 
{
	char sym;
	printf("\nЗадание 1б:\n");
	printf("Введите ОДИН любой символ: ");
	scanf(" %c", &sym);
	printf("Десятичный код символа: %d\n", sym);
	printf("Шестнадцатеричный код символа: 0x%X\n\n", sym);
}
int z1c() 
{
	int i2;
	printf("\nЗадание 1в:\n");
	printf("Введите целое число i НЕ равное нулю: ");
	scanf("%d", &i2);
	double res = 1.0 / i2;
	printf("Десятичное число для 1/%d равно: %f\n", i2, res);
}

int z2()
{
	SetConsoleOutputCP(65001);
	printf("\nЗадание 2:\n");
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("Неявные преобразования\n");
	printf("x (int)    = %d\n", x);
	printf("y (float)  = %f\n", y);
	printf("z (double) = %lf\n", z);
	printf("Поскольку переменные изначально типа int, то при делении дробь убирается безвозратно, поэтому даже если засунуть переменную в тип float/double, то дробь не появится(появятся только нули), т.к. число уже посчитано в типе int");
	return 0;
} 

int z3() 
{
	SetConsoleOutputCP(65001);
	int n;
	printf("\nЗадание 3:\n");
	printf("Введите целое трехзначное число n: ");
	scanf("%d", &n);
	int last = n % 10;
	int first = n / 100;
	int mid = (n / 10) % 10;
	int sum = first + mid + last;
	int revers = last * 100 + mid * 10 + first;

	printf("\nПоследняя цифра: %d \nGервая: %d \nCумма цифр: %d \nXисло наоборот: %d\n",
		last, first, sum, revers);
	return 0;
}

int main() 
{
	SetConsoleOutputCP(65001);
	z1();
	z1a();
	z1b();
	z1c();
	z2();
	z3();
	return 0;
}