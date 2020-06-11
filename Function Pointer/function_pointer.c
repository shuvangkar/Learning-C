#include <stdio.h>

void my_func(int x)
{
    printf("Value is : %d\n",x);
}

int main()
{
    void (*funPtr)(int);
   
    //the ampersand is optional
    funPtr = &my_func;   //funPtr takes the address of my_func
    funPtr(3);            //calling the function through function pointer(you can omit *)
    (*funPtr)(3);         // Same result. Here * is optional.
    return 0;
}