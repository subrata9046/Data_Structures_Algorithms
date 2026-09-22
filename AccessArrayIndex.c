#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};

    printf("1st element: %d\n", num[0]);
    printf("3rd element: %d\n", num[2]);

    printf("\nAll array elements:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("The array is: %d\n", num[i]);
    }

    return 0;
}