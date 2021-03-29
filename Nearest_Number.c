#include <stdio.h>
int main()
{
    int n, c, tmp, ch = 0, i = 0, k;
    scanf("%d %d", &n, &c);
    tmp = n;
    if (0 < n && n < 32750)
    {
        if (n >= 10000)
        {
            tmp = tmp % 10;
            i = tmp;
            while (i < 9)
            {
                if (ch == c)
                {
                    printf("%d", n + i);
                    k++;
                }
                else
                {
                    ch++;
                    i++;
                }
            }
        }
    }
    return 0;
}