#include <stdio.h>



int main() {
    
    // declaração das variáveis
    int torre = 1, bispo = 1, rainha =1, cavalo = 1;
    
    // movimentação da torre usando a estrutura de loop while.
    printf("\ntorre 5 casas para a direita\n");
    while (torre <= 5)
    {
        printf("direita\n"),
        torre++;
    }
    
    // movimentação do bispo usando a estrutura de loop do-while.
    printf("\nbispo 5 casas na diagonal superior direita\n");
    do
    {
        printf("cima direita\n");
        bispo++;
    } while (bispo <= 5);
    
    // movimentação da rainha usando a estrutura de loop For.
    printf("\nrainha 8 casas para a esquerda\n");
    for ( rainha; rainha <= 8; rainha++)
    {
        printf("esquerda\n");
    }

    // movimento do cavalo usando loop aninhado com while e For.
    printf("\ncavalo 2 para baixo e 1 para esquerda \n");
    while (cavalo--)
    {
        for (int i = 2; i > 0; i--)
        {
            printf("baixo \n");
        }
        
        printf("esquerda \n");
    }
    
    



    
      

    return 0;
}
