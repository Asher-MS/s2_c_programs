#include <stdio.h>

int main()
{
    int arr[100];
    int length = 0;
    printf("Enter the length");
    scanf("%d", &length);
    for (int i = 0; i < length; ++i)
    {
        scanf("%d", &arr[i]);
    }

    //Bubble Sort
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - i - 1; ++j)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Sorted array is ");
    for (int i = 0; i < length; ++i)
        printf("%d ", arr[i]);

    return 0;
}