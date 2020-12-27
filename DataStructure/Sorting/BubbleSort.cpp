#include <iostream>
using namespace std;

void bubbleSort(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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

    bubbleSort(myArray);
    cout << endl;
    cout << "After Sorting Sorting" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << myArray[j] << " ";
    }

    return 0;
}