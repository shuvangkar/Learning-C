#include <stdio.h>

int main()
{
    //declare using using 2-D character
    char char_arr1[2][10] = 
    {
        {'h','e','l','l','o','\0'},
        {'w','o','r','l','d','\0'}
    };

    //Same declaration in simpler way
    char char_arr2[2][10] =
    {
        "hello",
        "world"
    };
    //declaration using pointer
    char *char_arr3[] =
    {
        "hello  ",
        "world"
    };

    printf("String1 = %s\n",*(char_arr1+1));
    printf("String2 = %s\n",*(char_arr2+1));
    printf("String2 = %s\n",*(char_arr3+1));

    printf("Same result using array index\n");
    printf("String1 = %s\n",char_arr1[1]);
    printf("String2 = %s\n",char_arr2[1]);
    printf("String2 = %s\n",char_arr3[1]);
    
    printf("Size Calculation\n");
    printf("Size of char_arr3 = %ld\n",sizeof(char_arr3));

}