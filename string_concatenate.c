#include <stdio.h>
int main()
{
    char str1[100], str2[100], strconcate[200];
    int i, j;

    gets(str1);
    gets(str2);

    i = 0, j = 0;

    while (str1[i] != '\0')
    {
        strconcate[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        strconcate[j] = str2[i];
        i++;
        j++;
    }
    strconcate[j] = '\0';

    printf("Final string is: %s\n", strconcate);

    return 0;
}