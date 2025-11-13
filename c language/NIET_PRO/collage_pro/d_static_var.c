// Count use for give a fix value for any variable
// 📍 Keeps the variable’s value even after the function ends.
#include <stdio.h>
#include <conio.h>
void fun_count();

void fun_count()
{
    static int count = 0;
    count++; // static variable
    printf("value of count in 1st function : %d \n", count);
}

int main()
{
    fun_count();
    fun_count();
    fun_count();
    return 0;
}