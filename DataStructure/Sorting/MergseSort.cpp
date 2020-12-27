#include <iostream>
using namespace std;

void merge(int arr[], int left, int middel, int right)
{
    int i = left;       //starting index for left subarray
    int j = middel + 1; //starting index for right subarray
    int k = left;       //starting index for temp array

    int temp[5]; //tempArray

    while (i <= middel && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= middel)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int s = left; s <= right; s++)
    {
        arr[s] = temp[s];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int middel = (left + right) / 2;
        mergeSort(arr, left, middel);
        mergeSort(arr, middel + 1, right);

        merge(arr, left, middel, right);
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

    mergeSort(myArray, 0, 4);
    cout << endl;
    cout << "After Sorting Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    return 0;
}