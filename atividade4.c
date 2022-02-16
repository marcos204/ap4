#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Linha = ");
    scanf("%d", &r);
    printf("Coluna = ");
    scanf("%d", &c);
    char a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Linha %d e coluna %d = ", i + 1, j + 1);
            scanf(" %c", &a[i][j]);
        }
    }
    printf("\n Resultado da matriz :\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf(" %c ", a[i][j]);
        }
    }
    printf("\n");
}