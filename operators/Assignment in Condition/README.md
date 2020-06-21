## Assignment in Condition
Condition checking in loop, if-else we always use equal(==) operator. But we can also use assignment operator to make our code more concise. It is more useful for loops than condition. 
```
while( var = GetNext() )
{
  ...do something with var 
}
```
Which would otherwise have to be written
```
var = GetNext();
while( var )
{
 ...do something
 var = GetNext();
}
```
So assignment in condition makes code more concise. 

Another example
I find it most useful in chains of actions which often involve error detection, etc.
```
if ((rc = first_check(arg1, arg2)) != 0)
{
    report error based on rc
}
else if ((rc = second_check(arg2, arg3)) != 0)
{
    report error based on new rc
}
else if ((rc = third_check(arg3, arg4)) != 0)
{
    report error based on new rc
}
else
{
    do what you really wanted to do
}
```
The alternative (not using the assignment in the condition) is:
```
rc = first_check(arg1, arg2);
if (rc != 0)
{
    report error based on rc
}
else
{
    rc = second_check(arg2, arg3);
    if (rc != 0)
    {
        report error based on new rc
    }
    else
    {
        rc = third_check(arg3, arg4);
        if (rc != 0)
        {
            report error based on new rc
        }
        else
        {
            do what you really wanted to do
        }
    }
}
```
