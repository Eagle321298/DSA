///////****** Linear_search- this method is not useful to find same repeated element
// #include <stdio.h>
// int search(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {24, 45, 22, 76, 45, 87, 9, 55, 1, 54, 33, 22}, size = sizeof(arr) / sizeof(arr[0]), element = 22;
//     int result= search(arr, size, element);
//     printf("%d is found at index %d",element,result);
//     return 0;
// }





/////////this  is too useful
#include <stdio.h>
int search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("%d is found at %d\n", element, i);
        }
    }
}
int main()
{
    int arr[] = {24, 45, 22, 76, 45, 87, 9, 55, 1, 54, 33, 22}, size = sizeof(arr) / sizeof(arr[0]), element = 22;
    search(arr, size, element);

    return 0;
}