#include <stdio.h>

void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int num;
        num = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = num;
    }

    printf("Reversed Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter elements on index number [%d]:", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    reverse(a, n);

    printf("\nSum = %d", sum);

    return 0;
}
