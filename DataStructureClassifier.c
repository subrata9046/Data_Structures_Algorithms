 #include <stdio.h>
int main()
{
    int choice;

    printf("Data Structure Classifier\n");
    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");

    printf("Select a data structure (1-4): ");
    scanf("%d", &choice);

    printf("\nClassification:\n");

    switch(choice)
    {
        case 1:
            printf("Non-primitive\n");
            printf("Linear\n");
            printf("Static\n");
            break;

        case 2:
            printf("Non-primitive\n");
            printf("Linear\n");
            printf("Dynamic\n");
            break;

        case 3:
            printf("Non-primitive\n");
            printf("Non-linear\n");
            printf("Dynamic\n");
            break;

        case 4:
            printf("Non-primitive\n");
            printf("Non-linear\n");
            printf("Dynamic\n");
            break;

        default:
            printf("Invalid selection\n");
    }

    return 0;
}