#include <stdio.h>
void fun()
{
    printf("not called yet  \n");
}

int main()
{
    fun();
    fun();
    printf("hello from main.c \n");
    return 0;
}