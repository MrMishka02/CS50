#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    string city = get_string("Where do you live? ");
    printf("Hello, %s,", name);
    printf(" from %s\n", city);
}