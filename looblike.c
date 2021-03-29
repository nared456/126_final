#include <stdio.h>
int main()
{
    int N, i, j = 0, k, Max = 0, ch = 0, tmp, Ch = 0;
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
        if (Min > comment[i])
        {
            Min = comment[i];
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
        while (Ch != N - 1)
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
            for (i = 0; i < N; i++)
            {
                if (comment[i] < comment[i + 1])
                {
                    Ch++;
                }
            }
        }
        printf("%d %d", Min, Max);
    }
    return 0;
}