## Function pointer

### Delcaration
```
void (*funPtr)(int)
```
The above function declaration indicates that, `funPtr` is a function pointer that takes an `int` argument and returns void. 

### Initialize 
To initialize a function pointer, you have to provide it the address of a function in the code. 

```
void my_func(int x)
{
    printf("Value is : %d",x);
}
 int main()
 {
     funPtr = &my_func; 
 }
```
### Use the function pointer

```
int main()
{
    void (*funPtr)(int);
   
    //the ampersand is optional
    funPtr = &my_func;   //funPtr takes the address of my_func
    funPtr(3);            //calling the function through function pointer(you can omit *)
    (*funPtr)(3);         // Same result. Here * is optional.
    return 0;
}
```

Invoke the function pointed to just as if you were calling a function.
```
func_pointer( arg1, arg2 );
```
or you may optionally dereference the function pointer before calling the function it points to:
```
(*func_pointer)( arg1, arg2 );
```

## Function pointer as function parameter 
Passing the pointer to another function is basically the same. See the example code for details. 

## Use of Function Pointer
- Function pointer in c can be used to perform object oriented programming
- function pointer allow user pass different type of action. like sort routine. you want to allow the caller to choose how sort operation will be performed.A much nicer way of allowing the user to choose how to sort the data is simply to let the user pass in a function to the sort function
- Function pointer allows user to setting listener or callback function.  
- One of the big uses for function pointers in C is to call a function selected at run-time.


## Few function pointers explanation
#### Example 1
```
void *(*foo)(int *);
```
This indicates, `foo` is a function pointer that takes and int pointer as parameter and returns a void pointer. 