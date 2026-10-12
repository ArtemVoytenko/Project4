#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int A, B;
    printf("Введите значение датчика A: ");
    scanf("%d", &A);
    printf("Введите значение датчика B: ");
    scanf("%d", &B);
    if ((A % 2 != 0 && B % 2 == 0) ||
        (A % 2 == 0 && B % 2 != 0))
    {
        printf("Сирена включена!\n");
    }
    else
    {
        printf("Сирена выключена!\n");
    }
    return 0;
}