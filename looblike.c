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
        if (Min > comment[i])
        {
            Min = comment[i];
        }
        if (Max == comment[i])
        {
            ch++;
        }
    }
    if (ch >= 0 && ch <= 2)
    {
        printf("%d", chmax);
    }
    else
    {
        printf("%d %d\n", Min, Max);
    }
    return 0;
}