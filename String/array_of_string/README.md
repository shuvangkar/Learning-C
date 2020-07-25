## Array of string

Array of string is a 2-D arrays of character
```
char char_arr[2][10] = 
{
    {'h','e','l','l','o','\0'},
    {'w','o','l','d','\0'}
};
```
It is important to end the 1-D array with null character('\0'). Otherwise we cannot use them as string. 

The above initialize can be written in a simpler way
```
char char_arr[2][10] =
{
    "hello",
    "world"
}
```

## Accesst the String
name of the array like char_arr points to the first string
- char_arr + 0 points to the 0th string("hello)
- char_arr + 1 points tot he 1st string("world") 

