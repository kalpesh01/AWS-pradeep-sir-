//linear Search

#include <iostream>
#include <stdio.h>
using namespace std;

void lin_search(int arr[], int n, int item)
{
    int flag = 1;

    for (int i = 0; i <= n - 1; i++)
    {
        if (item == arr[i])
        {
            flag = 0;
            printf("Element Found %d", arr[i]);
        }
    }
    if (flag == 1)
        printf("not found");
}

int main()
{
    int arr[] = {33, 11, 66, 44, 88, 4, 3, 78, 83};

    lin_search(arr, 9, 99);
}