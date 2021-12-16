#include <stdio.h>
int main()
{
    int n, i;
    float arr[100], sum = 0, avg;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf("Average element in array: %.3f", avg);

    return 0;
}