#include <stdio.h>

int main()
{

    int data[100];
    int n, Loc = 0, max;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &data[i]);

    max = data[0];
    for (int k = 0; k < n; k++)
    {
        if (max < data[k])
        {
            Loc = k, max = data[k];
        }
    }

    printf("Maximum number is: %d and Location is: %d\n", max, Loc+1);

    return 0;
}