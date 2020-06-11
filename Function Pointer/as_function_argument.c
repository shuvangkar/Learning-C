#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int operation(int (*operationPtr)(int,int))
{
    return operationPtr(10,4);
}

int operation2(int (*operationPtr)(int,int),int x, int y)
{
    return operationPtr(x,y);
}

int main()
{
    int out = 0;
    out = operation(add);
    printf("Addition : %d\n",out);
    out = operation(sub);
    printf("Subtraction : %d\n",out);

    printf("Operation passing parameters and method\n");
    out = operation2(add,20,3); 
    printf("Addition : %d\n",out);
    out = operation2(sub,30,5);
    printf("Subtraction : %d\n",out);

    //Basically this is doing different operation on same parameters

    return 0;
}