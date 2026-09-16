#include <stdio.h>
#include <locale.h>
#define D 2.54
#define D2 2.32166
#define D3 2.7076


void task1();
void task2();
void task3();

void main()
{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
}

void task1()
{
	int num, num2;
	puts("введите число");
	scanf_s("%d", &num);
	printf("Введено число %d\n\n", num);
	puts("введите число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n\n", num2);
	printf("Сумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %d\nОстаток от деления: %d\n\n", num2 + num, num2 - num, num2 * num, num2 / num, num2 % num);
}
void task2()
{
	int dym;
	float result, result2, result3;
	puts("Введите значение");
	scanf_s("%d", &dym);
	result = D * dym;
	result2 = D2 * dym;
	result3 = D3 * dym;
	printf("%d английских дюймов - это %.2f см\n\n", dym, result);
	printf("%d испанских дюймов - это %.2f см\n\n", dym, result2);
	printf("%d старолитовских дюймов - это %.2f см\n\n", dym, result3);
}
void task3()
{
	float a, b;
	scanf_s("%f%f", &a, &b);
	puts("------------------------------------");
	puts("|   a*b     |   a+b     |   a-b     |");
	puts("------------------------------------");
	printf("|  %.1f*%.1f  |  %.1f+%.1f  |  %.1f-%.1f  |\n", a,b,a,b,a,b);
	puts("------------------------------------");
	printf("|   %.1f    |   %.1f     |   %.1f    |\n", a * b, a + b, a - b);
}