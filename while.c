#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    int soma = 0;

    printf("Digite números inteiros para somar (0 para sair):\n");

    scanf("%d", &numero);

    while (numero != 0)
    {
        soma += numero;
        printf("Digite outro número (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("A soma total dos números digitados é: %d\n", soma);

    system("pause");
    return 0;
}
