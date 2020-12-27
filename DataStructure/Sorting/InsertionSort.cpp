#include <iostream>
using namespace std;

void insertionSort(int arr[])
{
    int j, key, i;
    for (i = 1; i <= 5 - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
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

    insertionSort(myArray);
    cout << endl;
    cout << "After Sorting Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    return 0;
}