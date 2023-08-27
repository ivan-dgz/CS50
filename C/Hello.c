#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    int age = get_int("What is your age? ");
    printf("Hello, %s you are %i years old\n", answer, age);
}