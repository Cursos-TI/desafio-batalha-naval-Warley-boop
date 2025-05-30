#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

 int tabuleiro[10][10] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 1, 0, 0, 3, 3, 0, 0},
{0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
{0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
{0, 0, 0, 1, 0, 0, 1, 0, 0, 0},
{0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
{3, 1, 1, 1, 1, 1, 0, 0, 0, 0}


printf("O elemento na posição [6][3] é o navio\n", tabuleiro[6][3]);
printf("O elemento na posição [8][3] é o navio\n", tabuleiro[8][3]);
printf("O elemento na posição [6][3] é o navio\n", tabuleiro[0][9]);
printf("O elemento na posição [8][3] é o navio\n", tabuleiro[9][0]);

 }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
