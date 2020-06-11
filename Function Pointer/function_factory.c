#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}

/*********************************************
This is a function called function factory that 
recevies a parameter(char op)
and returns a function pointer to another function that
accepts two ints parameter and return another int
**************************************************/
int (*operation(char op))(int, int)
{
    if(op=='+') return &add;
    else if(op == '-') return &sub;
    else return NULL;
}
/*************************************************
 * There is a nicer way writing the operation function
 *  using typedef
 * **********************************************/
typedef int (*fun_ptr)(int,int);

fun_ptr operation2(char op)
{
    fun_ptr my_ptr = NULL;

    if(op=='+') my_ptr = &add;
    else if(op == '-') my_ptr = &sub;
    // else return NULL;
}

int main()
{
    int (*ptr)(int,int) = NULL;

    ptr = operation('+');
    int add_result = (*ptr)(2,4);
    printf("Add result : %d \n",add_result);

    ptr = operation('-');
    int sub_result = (*ptr)(10,3);
    printf("Sub result : %d \n",sub_result);

    printf("Doing the same thing in a simpler way \n");
    fun_ptr ptr2 = NULL;

    ptr2 = operation2('+');
    int add_result2 = ptr2(2,4);
    printf("Add result : %d \n",add_result2);

    ptr2 = operation2('-');
    int sub_result2 = ptr2(10,3);
    printf("Sub result : %d \n",sub_result2);

}