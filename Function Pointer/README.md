## Function pointer
In general, function pointers aren’t any more mysterious than data pointers: the main difference is that one references variables and the other references functions.
```
//a function taking two int arguments and returning an int 
int function(int x, int y);

//a pointer to such a function 
int (*pointer)(int x, int y);
```
### Delcaration
So the general pattern is: `returntype (*name)(parameters)`
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
Note that a function call has higher precedence over dereferencing, so we need to use parentheses accordingly.
```
(*fptr)();
// not *fptr();
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


## Callback function 

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
