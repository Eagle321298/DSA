// ////insertion method 1/////

// #include <stdio.h>
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int indInsertion(int arr[], int size, int element, int capacity, int index)
// {
//     if (size >= capacity)
//     {
//         return -1;
//     }
//     else
//     {
//         for (int i = size; i >= index; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         return arr[index] = element;
//     }
// }

// int main()
// {
//     int arr[5] = {12, 4, 23, 5, 22}, size = 5, index = 2, element = 35;
//     display(arr, size);
//     indInsertion(arr, size, element, 100, index);
//     size++;
//     display(arr, size);
//     return 0;
// }

////insertion method 2/////

#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indInsertion(int arr[],int size,int index,int element,int capacity)
{
    arr[size]=arr[index];
    arr[index]=element;
}
int main()
{
    int arr[6] = {2, 54, 23, 5, 22, 7}, size = 6, index = 3, capacity = 100, element = 30;
    display(arr, size);
    indInsertion(arr,size,index,element,100);
    display(arr,size+1);
    return 0;
}