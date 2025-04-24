#include <stdio.h>
#define TAM 10

int main(){


 //definindo as linhas e as colunas

 int tabuleiro[TAM][TAM] = {0};

int linha;
int coluna;
int linhaBase = 1; //linha do octaedro
int colunaCentro = 2;
int baseY = 7; //colunas do octaedro
int baseX = 1;

//símbolo de cone
// loop para construir o cone
for (int i = 0; i < 2; i++) {           // 2 linhas de altura
    for (int j = 0; j < 3; j++) {       // até 3 colunas de largura
        if ((i == 0 && j == 1) ||       // vértice do cone
            (i == 1)) {                 // linha da base
            tabuleiro[baseY + i][baseX + j] = 5;
        }
    }
}
//desenho de cruz
for (int i = 3; i <= 7; i++) {
    for (int j = 3; j <= 7; j++) {
        if (i == 5 || j == 5) {
            tabuleiro[i][j] = 9;
        }
    }
}

//desenhando octaedro
for (int i = 0; i < 5; i++) {
    int desloc = i <= 2 ? i : 4 - i;  // cria o efeito de simetria (0,1,2,1,0)
    tabuleiro[linhaBase + i][colunaCentro - desloc] = 7;
    tabuleiro[linhaBase + i][colunaCentro + desloc] = 7;
}

 //mostra as colunas e linhas do primeiro tabuleiro

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

return 0;
}
