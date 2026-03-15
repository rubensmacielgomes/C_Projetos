#include "aritmetica.h"

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int produto(int a, int b)
{
    return a * b;
}

int divisao(int a, int b)
{
    if (b == 0) {
        return 0;
    }
    return a / b;
}