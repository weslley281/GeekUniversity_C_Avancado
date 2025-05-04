#include <stdio.h>

int main()
{
    char caractere = 'A';
    int inteiro = 100;
    float decimal_simples = 3.14f;
    double decimal_duplo = 3.1415926535;
    short inteiro_curto = 10;
    long inteiro_longo = 1000000L;
    unsigned int inteiro_sem_sinal = 200U;

    printf("Tipos de Dados em C:\n\n");

    printf("char:\n");
    printf("  Valor: %c\n", caractere);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(char));

    printf("int:\n");
    printf("  Valor: %d\n", inteiro);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(int));

    printf("float:\n");
    printf("  Valor: %.2f\n", decimal_simples);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(float));

    printf("double:\n");
    printf("  Valor: %.10f\n", decimal_duplo);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(double));

    printf("short:\n");
    printf("  Valor: %d\n", inteiro_curto);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(short));

    printf("long:\n");
    printf("  Valor: %ld\n", inteiro_longo);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(long));

    printf("unsigned int:\n");
    printf("  Valor: %u\n", inteiro_sem_sinal);
    printf("  Tamanho: %lu byte(s)\n\n", sizeof(unsigned int));

    return 0;
}
