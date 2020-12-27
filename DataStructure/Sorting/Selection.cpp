#include <iostream>
using namespace std;

void selectionSort(int arr[])
{
    for (int i = 0; i < 5 - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp;
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
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

    selectionSort(myArray);
    cout << endl;
    cout << "After Sorting Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    return 0;
}