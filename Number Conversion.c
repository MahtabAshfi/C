
#include <stdio.h>
#include <math.h>

void decimal_to_binary();
void binary_to_decimal();


int main()
{
	int choice;

	printf("\tWelcome to Number Base Converter\n");
	printf("\t================================\n");

	do{
		printf("\n\n1. Decimal to Binary\n");
		printf("2. Binary to Decimal\n");
		printf("3. Exit\n");
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				decimal_to_binary();
				break;
			case 2:
				binary_to_decimal();
				break;
			default:
				return 0;
		}
	} while(1);

	return 0;
}


void decimal_to_binary()
{

    int a[1000], n, i;

    printf("\nEnter a decimal number: ");
    scanf("%d", &n);

    for(i=0; n>0; i++){

        a[i] = n % 2;
        n = n / 2;
    }

    printf("Equivalent binary number is: ");

    for(i= i - 1; i>=0; i--){

        printf("%d", a[i]);
    }

}

void binary_to_decimal()
{
  long int n, rem, decimal = 0, w = 1;

  printf("\nEnter a binary number: ");
  scanf("%ld",&n);



  while(n != 0){

    rem = n % 10;
    decimal = decimal + rem * w;
    n = n / 10;
    w = w * 2;

  }

  printf("Equivalent decimal number is: %ld", decimal);

}
