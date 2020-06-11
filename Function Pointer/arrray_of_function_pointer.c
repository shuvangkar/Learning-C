#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);

//Easy way of using typedef 
typedef int (*ptr_f)(int,int);
ptr_f func_array[4] = {NULL};

//difficult directly defining the array
int (*ptr2_f[4])(int,int) = {NULL};

int main()
{
    
}




int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}