#include <stdio.h>

int prime_num();

int prime_num(int num)
{
    int i;

    for (i = 1; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
int my_num = 0;
int result;

printf("Please, enter your number \n");
scanf("%d", &my_num);
printf("Your num is %d\n", my_num);

puts("Checking your number..");
if (result == prime_num(my_num))
{
	puts("Your number is NOT prime.");
}
else {
	puts("Your number is prime.");
}

return 0;
}


