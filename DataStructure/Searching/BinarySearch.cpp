
#include <iostream>
#include <stdio.h>
using namespace std;

void binary_search(int arr[], int n, int item);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    binary_search(arr, 10, 4);
}

void binary_search(int arr[], int n, int item)
{

    int l = 0;
    int u = n - 1;
    while (l <= u)
    {
        int m = (l + u) / 2;
        if (item == arr[m])
        {
            printf("Element found at index %d", m);
            return;
        }
        else if (item > arr[m])
        {
            l = m + 1;
        }
        else
        {
            u = m - 1;
        }
    }

    printf("Not Found");
}