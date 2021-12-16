#include <stdio.h>
int main()
{
    int n, key, cnt = 0, pos, num, occ = 0;
    int arr[100];

    printf("Enter numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to find occurence : ");
    scanf("%d", &num);

    for (int k = 0; k < n; k++)
    {
        if (arr[k] == num)
            occ++;
    }
    printf("Occurence is %d\n", occ);

    printf("Enter key to search : ");
    scanf("%d", &key);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == key)
        {
            pos = j + 1;
            printf("Item is found at position %d\n", pos);
            cnt++;
        }
    }
    if (cnt == 0)
        printf("Item is not found in the array!!\n");

    return 0;
}