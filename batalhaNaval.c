#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


void apresentacao (int linhas, int colunas) {
    // Função para exibir a apresentação do jogo
    printf("Bem-vindo ao jogo Batalha Naval!\n");
    printf("Tabuleiro de %d linhas por %d colunas\n", linhas, colunas);
}
void adicionarNavioHorizontal(int i,int j,int tabuleiro[10][10], int posicaonavio1[2]) {
    // Função para adicionar um navio ao tabuleiro
if (i == posicaonavio1[0] && j == posicaonavio1[1]) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
               // tabuleiro[i][j+1] = 3;
            }
            if (i == posicaonavio1[0] && j == posicaonavio1[1]+1) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
                //tabuleiro[i][j+1] = 3;
            }
            if (i == posicaonavio1[0] && j == posicaonavio1[1]+2) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
                //tabuleiro[i][j+1] = 3;
            }

}
void adicionarNavioVertical(int i,int j,int tabuleiro[10][10], int posicaonavio1[2]) {
    // Função para adicionar um navio ao tabuleiro
if (i == posicaonavio1[0] && j == posicaonavio1[1]) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
                
            }
            if (i == posicaonavio1[0]+1 && j == posicaonavio1[1]) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
            }
            if (i == posicaonavio1[0]+2 && j == posicaonavio1[1]) {
                tabuleiro[i][j] = 3; // Marca a posição do navio com 3
            }

} 
void adicionarNavioDiagonal(int i,int j,int tabuleiro[10][10], int posicaonavio1[2]) {
    if((i == posicaonavio1[0]) && (j == posicaonavio1[1])){
        tabuleiro[posicaonavio1[0]][posicaonavio1[1]] = 3;
    }
    if (i == posicaonavio1[0]+1 && j == posicaonavio1[1]+1) {
        tabuleiro[posicaonavio1[0]+1][posicaonavio1[1]+1] = 3;
    }
    if (i == posicaonavio1[0]+2 && j == posicaonavio1[1]+2) {
        tabuleiro[posicaonavio1[0]+2][posicaonavio1[1]+2] = 3;
    }
   

}


void exibirTabuleiro(int tabuleiro[10][10], int navio1[2],int navio2[2],int navio3[2],int navio4[2]) {
   
    // Função para exibir o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0
            adicionarNavioHorizontal(i, j, tabuleiro, navio1);
            adicionarNavioVertical(i, j, tabuleiro, navio2);
            adicionarNavioDiagonal(i, j, tabuleiro,navio3);
           printf("%d ", tabuleiro[i][j]);
            
        }
        printf("\n");

    }
}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    const int colunas = 10;
    const int linhas = 10;
    int tabuleiro[linhas][colunas];
    char posicionenalinha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char posicionenacoluna [10] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int navio1[2] = {1,2}; // Posição do primeiro navio (linha, coluna)
    int navio2[2] = {3,3}; // Posição do segundo navio (linha, coluna)
    int navio3[2] = {5,5}; // Posição do terceiro navio (linha, coluna)
    int navio4[2] = {6,6}; // Posição do quarto navio (linha, coluna)
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
     apresentacao(linhas, colunas);
     exibirTabuleiro(tabuleiro,navio1,navio2,navio3,navio4);
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
