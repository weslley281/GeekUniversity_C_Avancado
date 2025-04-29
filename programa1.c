#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade;
    
    printf("Quantas vese voce ja deu a bunda (digite o numero de vezes):");
    scanf("%d", &quantidade);
    printf("Voce já deu a bunda hoje %d vezes\n", quantidade);
    
    if(quantidade == 1){
        printf("Isso ai\n");
    }else if (quantidade > 1)
    {
        printf("Voce está dando demais\n");
    }else{
        printf("Sai pra la estressado\n");
    }
    

    system("pause");
    return 0;
}
