#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);

    printf("\n1 for addition");
    printf("\n2 for subtraction");
    printf("\n3 for multiplication");
    printf("\n4 for division");

    printf("\nenter your choice: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("The addition is: %d", a + b);
        break;
    case 2:
        printf("The subtraction is: %d", a - b);
        break;
    case 3:
        printf("The multiplication is: %d", a * b);
        break;
    case 4:
        printf("The division is :%d", a / b);
        break;
    default:
        printf("invalid choice");
    }

    return 0;
}