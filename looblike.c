#include <stdio.h>
int main()
{
    int N, i, j = 0, k, Max = 0, ch = 0, tmp;
    int chmax;
    scanf("%d", &N);
    int comment[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &comment[i]);
    }
    int Min = comment[i];
    for (i = 0; i < N; i++)
    {
        if (Max < comment[i])
        {
            Max = comment[i];
            chmax = i + 1;
        }
    }
    for (j = 0; j < N; j++)
    {
        if (Max == comment[j])
        {
            ch++;
        }
    }
    if (ch >= 0 && ch < 2 || ch == N)
    {
        printf("%d", chmax);
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            if (comment[i] > comment[i + 1])
            {
                tmp = comment[i + 1];
                comment[i + 1] = comment[i];
                comment[i] = tmp;
            }
        }
        for (i = 0; i< N; i++)
        {
            printf("%d ",comment[i]);
        }
    }
    return 0;
}