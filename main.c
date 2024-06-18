#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

void leiaMatriz(float M[][NUM_COL]);
float somaDiagonal(float M[][NUM_COL]);



int main()
{
    float M[NUM_LIN][NUM_COL];
    leiaMatriz(M);
    float soma = somaDiagonal(M);
    printf("\n %f", soma);

    return 0;
}

void leiaMatriz(float M[][NUM_COL])
{
    for(int i = 0; i < NUM_LIN; i++)
    {
        for(int j = 0; j < NUM_COL; j++)
        {
            printf("\nElemento [%i][%i]: ", i + 1, j + 1);
            scanf("%f", &M[i][j]);
        }
    }
}

float somaDiagonal(float M[][NUM_COL])
{
    float soma = 0;
    for(int x = 0; x < NUM_LIN; x++)
    {
        soma += M[x][x];
    }
    return soma;
}
