#include <stdio.h>

int main()
{

    int a = 11;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", a);
            a++;
        }
        printf("\n");
    }

    // dynamic pattern

    int b;

    printf("enter last element:");
    scanf("%d", &b);

    int num = 11;

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}