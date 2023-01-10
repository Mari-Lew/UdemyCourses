
/*
    This file is based off of udemy codecamp for learning C, C++, C#, and java
    Name: Marissa
    Date: 11/2/2022

    OPERATORS IN C PROGRAMMING
*/
    int x = 10;
    int y = 20;
    int z;
void arithmeticOperators()
{

    // Addition, multiplication, division, modulus, increment, decrement
    z = x + y;
    printf("%d plus %d is %d \n", x,y,z);

    z = x * y;
    printf("%d times %d is %d \n", x,y,z);

    z = x / y;
    printf("%d divided by %d is %d \n", x,y,z);

    z = x + y;
    printf("%d divided by %d has a remainder of %d \n", x,y,z);

    z = ++x;
    printf("The value of Z is now %d \n", z);

    z = --x;
    printf("The value of Z is now %d \n", z);
}

void relationalOperators()
{
    int x = 25;
    int y = 20;
    int z;

        for(x = 0; x <= 25; x++)
        {
            if(x == y)
        {
            printf("X and Y are equal. X : %d \n", x);
        }
        else if(x != y && x > y )
        {
            printf("X and Y are not equal; x is greater than y. X : %d \n", x);
        }
        else if(x != y && x < y)
        {
            printf("X and Y are not equal; X is less than y. X : %d \n", x);
        }
    }
}

void logicalOperators()
{
    if( x && y == 10)
    {
        printf("both are 10. (Not true)\n");
    }
    else
    {
        printf("One or neither are 10. (is true)\n");
    }

    //____________________________________________
    if( ! (x && y == 10))
    {
        printf("Either x is not 10 or y is not 10. (true)\n");
    }
    else
    {
        printf("Both are 10 (is false)\n");
    }

    if(x || y == 10)
    {
        printf("Either x or y is = 10 (true)\n");
    }
    else
    {
        printf("Neither are 10 (is false)\n");
    }
}

int bitwiseOperators()
{
     z = x & y;
    printf("The result of z is %d \n", z);

    z = x | y;
    printf("The result of z is %d \n", z);
}

