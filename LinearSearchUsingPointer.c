#include <stdio.h>

void linearSearch(int *arr, int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) == key)
        {
            printf("Found at index %d\n", i);
            return;
        }
    }

    printf("Not found\n");
}

int main()
{
    int arr[7] = {5, 7, 2, 3, 9, 1, 8};
    int key = 9;
    int n = 7;

    linearSearch(arr, n, key);

    return 0;
}