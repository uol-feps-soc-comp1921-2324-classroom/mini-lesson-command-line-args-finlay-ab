#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <stdio.h> 

int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    if (argc != 3)
    {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 0;
    }

    if (isdigit(argv[1]) && isdigit(argv[2]))
    {
        printf("both inputs must be digits!");
        return 1;
    }

    // Calculate and print the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
