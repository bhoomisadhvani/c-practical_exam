#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements on index number[%d]:",i);
        scanf("%d", &a[i]);
    }

    int *ptr = a;

    printf("Cube of elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}