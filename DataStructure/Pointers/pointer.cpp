#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x = 5;
    int *j;

    j = &x;
    printf("%d \n", x);
    printf("%d \n", *j);
    printf("%d \n", j);
    return 0;
}