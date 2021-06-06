/////////Binary search is possible only when given array is sorted
#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1;
    while (low <= high) //keep searching until low<=high
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    return -1; //to show entered no. is not in the list
}
int main()
{
    int arr[] = {2, 4, 17, 34, 50, 69, 77, 84, 17, 90, 112}, size = sizeof(arr) / sizeof(arr[0]), element = 1123;
    int result = binarysearch(arr, size, element);
    if (result == -1)
    {
        printf("%d is not in the array\n", element);
    }
    else
    {
        printf("%d is found at %d", element, result);
    }

    return 0;
}