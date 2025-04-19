#include <stdio.h>
#define TAM 10

int main(){


 //definindo as linhas e as colunas

 int tabuleiro[TAM][TAM] = {0};

int linha;
int coluna;

//posiciona o navio na vertical
tabuleiro[5][2] = 3;
tabuleiro [5][3] = 3;
tabuleiro[5][4] = 3;

//posiciona os navios na horizontal
tabuleiro[3][6] = 3;
tabuleiro [4][6] = 3;
tabuleiro[5][6] = 3;

 //mostra as colunas

 printf("  ");

 for(char c = 'A'; c < 'A' + TAM; c++){
 printf("%c ", c);
 }
 printf("\n");

for(int i = 0; i < TAM; i++){
    printf("%2d ", i + 1);
    for(int j = 0; j < TAM; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}
//acessando os indices

return 0;
}
