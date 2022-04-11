//29) Implement the Selection Sort, Bubble Sort and Insertion Sort.


#include<stdio.h>
#include<stdlib.h>


int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After Bubble sort Elements are : ");
    display(arr, n);
}

int selection_sort(int arr[], int n)

{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    display(arr, n);
}

int insertion_sort(int arr[], int n)
{
    int i, j, min;
    for (i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (min < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = min;
    }
    printf("After Insertion sort Elements are : ");
    display(arr, n);
}

int main()
{
    int n, choice, i;
    char ch[20];
    printf("Enter no. of elements you want to be sort : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Please select option Given Below in the list  for Sorting : \n");
    while (1)
    {
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Display Array.\n");
        printf("5. Exit the Program.\n");
        printf("\nEnter your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubble_sort(arr, n);
            break;
        case 2:
            selection_sort(arr, n);
            break;
        case 3:
            insertion_sort(arr, n);
            break;
        case 4:
            display(arr, n);
            break;
        case 5:
            return 0;
        default:
            printf("\nPlease Select any 1-5 option in the list  ----\n");
        }
    }
    return 0;
}