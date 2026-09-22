#include <stdio.h>

int main()
{
    int B, W, LR, LC, M, N, I, J;
    int choice;

    printf("Enter B: ");
    scanf("%d", &B);

    printf("Enter W: ");
    scanf("%d", &W);

    printf("Enter LR: ");
    scanf("%d", &LR);

    printf("Enter LC: ");
    scanf("%d", &LC);

    printf("Enter R: ");
    scanf("%d", &M);

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter I: ");
    scanf("%d", &I);

    printf("Enter J: ");
    scanf("%d", &J);

    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int x = B + W * ((I - LR) * N + (J - LC));

            printf("The row major address is: %d\n", x);

            break;
        }

        case 2:
        {
            int y = B + W * ((J - LC) * M + (I - LR));

            printf("The column major address is: %d\n", y);

            break;
        }

        default:
            printf("Invalid choice\n");
    }

    return 0;
}