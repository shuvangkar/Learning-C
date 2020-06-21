#include <stdio.h>

int main(void)
{
    int a = 10;
    float f = 230.34;

    void *ptr;

    ptr = &a;
    printf("a = %d \n", *(int*)ptr);    //deferencing

    ptr = &f;
    printf("a = %f \n", *(float*)ptr);  //deferencing
}