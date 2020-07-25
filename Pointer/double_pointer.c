#include <stdio.h>
#include <stdlib.h>

typedef struct Data
{
    int a;
    int b;
}data_t;

data_t **getData(data_t **dPtr);

int main(void)
{
    data_t **dData = (data_t**)malloc(3*sizeof(data_t*));
    data_t **p = getData(dData);
    // p--;
    printf("a = %d\n",(*p) ->a);
    p++;
    printf("a = %d\n",(*p) ->a);
}


data_t **getData(data_t **dPtr)
{
    // data_t **dPtr = (data_t**)malloc(3*sizeof(data_t*));
    data_t **p = dPtr;
    data_t data0;
    data0.a = 10;
    data0.b = 11;

    *dPtr = &data0;
    int x = 50;

    data_t data1;
    data1.a = 20;
    data1.b = 21;

    dPtr++;
    *dPtr = &data1;

    return p;
}



    // data_t *ptr = (data_t*)malloc(3*sizeof(data_t*));
    // printf("sizeof ptr = %ld\n",sizeof(ptr));
    // ptr = NULL;
    // printf("ptr address = %p\n",ptr);
    // printf("ptr address = %p\n",&ptr);

    // data_t **dptr = &ptr;
    // ptr = &data0;
    // printf("ptr address = %p\n",ptr);
    // printf("a = %d\n",ptr ->a);
    // ptr++;
    // ptr = &data1;
    // printf("ptr address = %p\n",ptr);
    // printf("a = %d\n",ptr ->a);
    // printf("ptr address = %p\n",ptr);
    // printf("ptr address = %p\n",&ptr);

    // data_t *p = *dptr;
    // p--;
    // printf("address = %d\n",p->a);


    // printf("\nPointer = %p\n",++(&ptr));