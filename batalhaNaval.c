#include <stdio.h>

#define TAMANHO_TABULEIRO 10  // Define o tamanho do tabuleiro

// Função para exibir as coordenadas dos navios
void exibirCoordenadas(int navioHorizontal[2], int navioVertical[2], int tamanhoHorizontal, int tamanhoVertical) {
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        printf("(%d, %d)\n", navioHorizontal[0], navioHorizontal[1] + i);
    }

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        printf("(%d, %d)\n", navioVertical[0] + i, navioVertical[1]);
    }
}

int main() {
    // Definindo as variáveis para os navios
    int navioHorizontal[2] = {2, 3};  // Posição inicial do navio horizontal (x, y)
    int navioVertical[2] = {5, 1};    // Posição inicial do navio vertical (x, y)
    int tamanhoHorizontal = 4;         // Tamanho do navio horizontal
    int tamanhoVertical = 3;           // Tamanho do navio vertical

    // Exibindo as coordenadas
    exibirCoordenadas(navioHorizontal, navioVertical, tamanhoHorizontal, tamanhoVertical);

    return 0;  // Finaliza a execução do programa
}
