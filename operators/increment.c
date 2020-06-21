#include <stdio.h>

int main()
{
    int x = 2;
    int y = 2;
    printf("**********Example 1************\n");
    x++;
    ++y;
    printf("X = %d, Y = %d \n",x,y);    //X = 3, Y = 3
    printf("X = %d, Y = %d \n",x,y);    //X = 3, Y = 3
    printf("**********Example 2************\n");
    printf("X = %d, Y = %d \n",x++,++y);//X = 3, Y = 4
    printf("X = %d, Y = %d \n",x,y);    //X = 4, Y = 4

    printf("**********Example 2************\n");
    int z = ++x + y++;      //5+4
    printf("Z = %d \n",z);  //9
    
    z = ++x + y++;          //6+5
    printf("Z = %d \n",z);  //11

    return 0;
}