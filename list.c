#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 8;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 3;
    int count = 0;
    for (int i = 0; i < 5; i++){
        count += arr[i];
    }
    printf("sum is: %i\n", count);
}