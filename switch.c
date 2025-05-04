#include <stdio.h>

int main() {
    int opcao;

    printf("Digite um número (1 a 3): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Você escolheu a opção 1.\n");
            break;
        case 2:
            printf("Você escolheu a opção 2.\n");
            break;
        case 3:
            printf("Você escolheu a opção 3.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    system("pause");
    return 0;
}
