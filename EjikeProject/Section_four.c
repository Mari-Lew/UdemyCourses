/*
    This file is based off of udemy codecamp for learning C, C++, C#, and java
    Name: Marissa
    Date: 11/7/2022 - finally returning after being sick

    LOOP SYSTEMS IN C PROGRAMMING
*/
void whileLoop()
{
    int x = 5;

    while(x <= 30)
    {
        //print out x until it reaches 30
        printf("x = %d \n", x);
        x++; //increase x by one. Forgetting this will cause an infinite loop :)
    }

}

//This does what the while loop created above does
void forLoop()
{
    int x;

    for(x = 5 ; x <= 30; x++)
    {
        printf("x = %d \n", x);
    }
}

//This also does the same thing as the while loop
void doWhileLoop()
{
    int x = 5;

    do
    {
        printf("X = %d \n", x);
        x++;
    } while( x <= 30);
}

void primeNums()
{
    int x, y;

    for (x = 2; x < 50; x++)
    {
        for (y = 2; y <=(x/y); y++)
        {
            if(!(x % y))
                break;

        }

        if( y > (x/y))
        {
            printf("%d is prime. \n", x);
        }
    }
}

void breakStatement()
{
    int x = 10;
    //Terminator time

    while(x < 50)
    {
        printf("x = %d. \n", x);
        x++;

        if (x > 30)
        {
            break;
        }
    }
}


void continueStatement()
{
    int x = 10; // x is 10

    while(x < 50) //while x is less than 50
    { //do stuff:

        if(x == 30) //if x is 30
        {
            x++; // increment so that 30 is never printed out
            continue; //keep going.
        }
        printf("X = %d. \n", x);
        x++;
    }
}

void infiniteLoop() //Loop that
{
    for(;;) //infinite :)
    {
        printf("I want to end your computer. :) \n");
    }
}
