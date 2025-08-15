#include "ft_printf.h"
#include <limits.h>

int main() {
    int num = 42;
    char *str = "Hello, 42!";
    void *ptr = &num;

    // Teste com caracteres
    ft_printf("Testando com caracteres:\n");
    ft_printf("Char: %c\n", 'A');  // Testa caractere
    ft_printf("String: %s\n", str);  // Testa string
    ft_printf("Percent: %%\n");  // Testa o caractere '%'

    // Teste com inteiros e números negativos
    ft_printf("\nTestando com inteiros e números negativos:\n");
    ft_printf("Int: %d\n", num);  // Testa número inteiro
    ft_printf("Int negativo: %d\n", -num);  // Testa número inteiro negativo
    ft_printf("Int (mínimo): %d\n", INT_MIN);  // Testa o menor valor de inteiro
    ft_printf("Int (máximo): %d\n", INT_MAX);  // Testa o maior valor de inteiro

    // Teste com números sem sinal (unsigned)
    ft_printf("\nTestando com números sem sinal:\n");
    ft_printf("Unsigned int: %u\n", 4294967295U);  // Testa o maior número sem sinal
    ft_printf("Unsigned int: %u\n", 123456789);  // Testa número sem sinal genérico

    // Teste com números em hexadecimal (minúsculo e maiúsculo)
    ft_printf("\nTestando com hexadecimal (minúsculo e maiúsculo):\n");
    ft_printf("Hex (minúsculo): %x\n", 255);  // Testa hexadecimal em minúsculo
    ft_printf("Hex (maiúsculo): %X\n", 255);  // Testa hexadecimal em maiúsculo

    // Teste com ponteiro
    ft_printf("\nTestando com ponteiros:\n");
    ft_printf("Ponteiro: %p\n", ptr);  // Testa ponteiro
    ft_printf("Ponteiro nulo: %p\n", NULL);  // Testa ponteiro nulo

    // Teste com diferentes tipos de números
    ft_printf("\nTestando com diferentes tipos de números:\n");
    ft_printf("Hexadecimal (valor negativo): %x\n", -42);  // Hexadecimal negativo
    ft_printf("Decimal (valor negativo): %d\n", -255);  // Decimal negativo

    return 0;
}
