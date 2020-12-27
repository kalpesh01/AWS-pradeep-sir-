//wtp QuickSort
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[end];
    int pIndex = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;
    return pIndex;
}

void QuickSort(int arr[], int start, int end)
{
    int p;
    if (start < end)
    {
        p = partition(arr, start, end);
        QuickSort(arr, start, (p - 1));
        QuickSort(arr, (p + 1), end);
    }
}

int main()
{
    int myArray[5];
    cout << "Enter the 5 Elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myArray[i];
    }

    cout << "Before Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    QuickSort(myArray, 0, 4);
    cout << endl;
    cout << "After Sorting Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    return 0;
}