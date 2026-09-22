#include <stdio.h>

int main()
{
    int arr1D[4] = {10, 20, 30, 40};

    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Accessing Elements\n");

    printf("1D index 2: %d\n", arr1D[2]);

    printf("2D row 1, col 2: %d\n", arr2D[1][2]);

    printf("\n1D Array:\n");

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", arr1D[i]);
    }

    printf("\n\n2D Array:\n");

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("%d ", arr2D[row][col]);
        }

        printf("\n");
    }

    return 0;
}