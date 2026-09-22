#include <stdio.h>

void traverseArray(int *arr, int n)
{
    printf("Array elements are: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    traverseArray(arr, n);

    return 0;
}