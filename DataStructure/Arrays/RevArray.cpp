
#include <iostream>
using namespace std;

int *reverses(int arr1[], int size)
{
    static int temp[3];
    for (int i = 0, j = size - 1; i < size && j >= 0; i++, j--)
    {
        temp[i] = arr1[j];
    }
    return temp;
}

int main()
{
    int arr[3];
    int s;
    cout << "Enter the values";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    s = sizeof(arr) / sizeof(int);
    cout << s;
    // ArrayOp ao = new ArrayOp();
    int *a = reverses(arr, s);

    cout << a;

    return 0;
}
