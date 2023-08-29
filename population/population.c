#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n = get_int("Start Size: ");
    while (n < 9){
        n = get_int("Start Size: ");
    }
    // TODO: Prompt for end size
    int m = get_int("End Size: ");
    while (m < n*2){
        m = get_int("End Size: ");
    }
    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    while (n <= m){
    n = n + n/3 - n/4;
    y += 1;
    };
    // TODO: Print number of years
    printf("Years: %i\n", y);
}
