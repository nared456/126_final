#include <stdio.h>
int main()
{
    int N, i, j = 0, k, Max = 0, ch = 0;
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
    for (k = 0; k < N; k++)
    {
        if (Max == comment[k])
        {
            ch++;
        }
    }
    if (ch >= 0 && ch < 2)
    {
        printf("%d", chmax);
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            if (Min > comment[i])
            {
                Min = comment[i];
            }
        }
        printf("%d %d", Min, Max);
    }
    return 0;
}