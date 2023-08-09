#include <stdio.h>


int linearSearchRecursive(int arr[], int n, int x, int index)
{
    if (index >= n) {
        return -1;
    }
    else if (arr[index] == x) {
        return index;
    }
    else {
        return linearSearchRecursive(arr, n, x, index + 1);
    }
}


int linearSearchNonRecursive(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;


    int indexRecursive = linearSearchRecursive(arr, n, x, 0);
    if (indexRecursive != -1) {
        printf("Element found at index %d (using recursion).\n", indexRecursive);
    }
    else {
        printf("Element not found (using recursion).\n");
    }


    int indexNonRecursive = linearSearchNonRecursive(arr, n, x);
    if (indexNonRecursive != -1) {
        printf("Element found at index %d (without recursion).\n", indexNonRecursive);
    }
    else {
        printf("Element not found (without recursion).\n");
    }

    return 0;
}

