#include <stdio.h>
int sum(int num[], int size)
{
    int a = 0;

    for (int i = 0; i < size; i++)
    {
        a += num[i];
    }

    return a;
}

int main()
{

    int n;

    printf("enter number of elements:");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter number of element [%d]:", i);
        scanf("%d", &num[i]);
    }

    int result = sum(num, n);

    printf("Sum of array elements is: %d", result);

    return 0;
}
