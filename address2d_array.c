#include<stdio.h>
int main()
{
    int M, N, J, K, w = 4;
    printf("Enter Row's: ");
    scanf("%d", &M);
    printf("Enter Colomn's: ");
    scanf("%d", &N);
    int array[M][N];
    printf("Enter Array Element: \n");
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("J = ");
    scanf("%d", &J);
    printf("K = ");
    scanf("%d", &K);
    int *base = &array;
    printf("Base Address of the array: %p\n", *base);
    int locRow = base + w * ( N * ( J - 1 ) + ( K - 1 ));
    printf("Row major Order Address =%d\n", locRow);
    int locColumn = base + w * ( M * ( K - 1) + ( J - 1));
    printf("Column major Order Address =%d\n", locColumn);
    return 0;
}
