#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    printf("¬ведите три числа (A, B, C): ");

    if (scanf("%d %d %d", &A, &B, &C) != 3)
    {
        printf("ќшибка\n");
    }
    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
    {
        printf("√ипотеза верна: все числа кратны трем\n");
    }
    else
    {
        printf("√ипотеза не верна: хот€ бы одно число не кратно трем\n");
    }
}