#include <stdio.h>

int main()
{

    int t, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        if (x >= 80 && x <= 100)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
