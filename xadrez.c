#include <stdio.h>

// função recursiva para mover a torre.
void moverTorre (int casas)
{
    if (casas > 0)
    {
        moverTorre(casas - 1);
        printf("direita\n");
    }
       
}

// função recursiva com estrutura aninhada para mover o bispo.
void moverBispo(int casas) {
    if (casas > 5) {
        return; // Condição de parada
    }

    // Loop aninhado: imprime "cima" e "direita" alternadamente
    for (int i = 0; i < 2; i++) {
        if (i % 2 == 0) {
            printf("cima\n");
        } else {
            printf("direita\n");
        }
    }

    moverBispo(casas + 1); // Chamada recursiva para o próximo passo
}

// função recursiva para mover a rainha.
void moverRainha (int casas)
{
    if (casas > 0)
    {
        moverRainha(casas - 1);
        printf("esquerda\n");
    }
    
}

int main() {
    
    // declaração das variáveis
    int cavalo = 1;
    
    // chamada da função recursiva da torre.
    printf("\ntorre 5 casas para a direita\n");
    moverTorre(5);
    
    
    // chamada da função recursiva do bispo.
    printf("\nbispo 5 casas na diagonal superior direita\n");
    moverBispo(1);
    
    
    // chamada da função recursiva da rainha.
    printf("\nrainha 8 casas para a esquerda\n");
    moverRainha(8);
    

    // movimento do cavalo usando loop aninhado com while e For.
    printf("\ncavalo 2 para cima e 1 para a direita \n");
    while (cavalo--)
    {
        for (int i = 2; i > 0 && i <  3; i--)
        {
            printf("cima \n");
        }
        
        printf("direita \n");
    }
    
    

    return 0;
}
