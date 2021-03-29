#include <stdio.h>
int main()
{
    int N[3], i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &N[i]);
    }
    int A[N[0]][N[0]], B[N[1]][N[1]], C[N[2]][N[2]];
    for (i = 0; i < N[0]; i++)
    {
        for (j = 0; j < N[0]; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (i = 0; i < N[1]; i++)
    {
        for (j = 0; j < N[1]; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (i = 0; i < N[2]; i++)
    {
        for (j = 0; j < N[2]; j++)
        {
            scanf("%d",&C[i][j]);
        }
    }
    return 0;
}