#include <stdio.h>

int main()
{
    int x = 5;
    int *j;

    j = &x;
    printf("%d \n", x);
    printf("%d \n", *j);  //will print value of x
    printf("%d", j);   // it will print containing address of x
    return 0;
}
