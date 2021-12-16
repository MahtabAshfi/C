#include <stdio.h>
#define str 100

int main()
{
    char STR[str];
    int digit = 0, spch = 0, i = 0, alph = 0;

    printf("Enter the string : ");
    gets(STR);

    while (STR[i] != '\0')
    {

        if ((STR[i] >= 'a' && STR[i] <= 'z') || (STR[i] >= 'A' && STR[i] <= 'Z'))
        {
            alph++;
        }

        else if (STR[i] >= '0' && STR[i] <= '9')
        {
            digit++;
        }

        else
        {
            spch++;
        }
        i++;
    }

        printf("Digits: %d\n", digit);
        printf("Special Characters: %d\n", spch);

        return 0;
 }
