## Structures and Pointers

```
struct Circle
{
    float pi;
    int radius;
    float area;
};

struct Circle circle
struct Circle circlePtr
```
### Access Using dot operator
- Left : name of the structure variable
- Right: name of the member
- Result : the designated member

```
circle.area
```
### Acess using arrow operator 
- Left: *must* be apointer to structure
- Right = member

```
circlePtr->area
```
### Note
The following is equal 
```
(*circlePtr).area == circlePtr -> area
```
### Why is a dot operator used with a pointer to an array structure
An array is really just a pointer, So pointers can also be treated as arrays.

As soon as you index an array (using []) it becomes a variable. If you zero index a pointer you can access it like a variable too (don't do this as it makes the code less readable, use the * operator instead).

```
struct Student
{
    int id;
    int age;
}student;

struct student students[20]; //an array of 20 students
struct student studentPtr;   //a pointer to a student structure. 

//Now asign value to structure array
students[0].id = 100;

//assign value to studentPtr. As it is a pointer.
//need to allocate memory for this
studentPtr = malloc(sizeof(struct student)*10); //allocated memory for 10 student

/*
when i access the strudentPtr as like array, it becomes the 
variable not pointer. pointer can be accessd like array, we know that.
*/ 
studentPtr[2].id = 100; 

```