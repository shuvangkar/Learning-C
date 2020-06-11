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
    func_array[0] = &add;
    int result_add = func_array[0](2,5);
    printf("Addition : %d \n",result_add);

    func_array[1] = &sub;
    int result_sub = func_array[1](20,3);
    printf("Subtraction : %d \n",result_sub);

    return 0;

}




int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}