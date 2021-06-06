// //////Deletion method 1
// #include <stdio.h>
// void display(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void indeletion(int arr[], int size, int index, int capacity)
// {
//     for (int i = index; i < size - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
// }
// int main()
// {
//     int arr[] = {23, 55, 1, 87,32,56, 3, 65}, index = 4, capacity = 100,size=sizeof(arr)/sizeof(arr[0]);
//     display(arr, size);
//     indeletion(arr, size, index, capacity);
//     size--;
//     display(arr,size);
//     return 0;
// }

////Deletion method 2
#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indeletion(int arr[], int size, int capacity, int index)
{
    arr[index] = arr[size - 1];
}
int main()
{
    int arr[] = {23, 5, 23, 78, 55, 88, 43}, index = 3, size = sizeof(arr) / sizeof(arr[0]), capacity = 100;
    display(arr, size);
    indeletion(arr, size, capacity, index);
    size--;
    display(arr,size);
    return 0;
}