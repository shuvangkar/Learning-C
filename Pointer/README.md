
## Void pointer
A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typcasted to any type.

```
void *ptr;
int i = 10;
float f = 10.23;

ptr = &i;
ptr = &f;
```

### Pros
- void pointers are used for implement generic function in C
- malloc() and calloc() returns void* type.So it can be used with any data type
### Cons
- void pointers cannot be deferenced directly
- pointer arithmetic is not possible with void pointer

## Deference void pointer 
Void pointer cannot be deferenced directly. but it can be deferenced type casting. 
```
int a = 10;
void *ptr;

ptr = &a;
printf("Value is: %d", *(int*)ptr)
// here (int*)ptr -> typecaste
//Then *(int*)ptr deferenced
```

## Why use void pointer
 Void pointers can store the object of any type, and we can retrieve the object of any type by using the indirection operator with proper typecasting.