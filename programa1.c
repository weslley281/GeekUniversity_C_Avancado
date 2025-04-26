#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade;
    
    printf("Quantas vese voce ja deu a bunda:");
    scanf("%d", &quantidade);
    printf("Voce já deu a bunda %d vezes\n", quantidade);

    system("pause");
    return 0;
}
