/*
    This file is based off of udemy codecamp for learning C, C++, C#, and java
    Name: Marissa
    Date: 11/2/2022

    DECISION MAKING STATEMENTS IN C PROGRAMMING
*/

void ifStatements()
{
    int a = 9;
    int b = 5;
    int c;
    if(a == 9 && b == 5)
    {
        printf("a is 9 and b is 5 \n");
    }

    if(a + b == 14)
    {
        printf("a + b is 14 \n");
    }

}

ifElseStatement()
{
    int a = 9;
    int b = 5;
    int c;
     if(a + b == 10)
    {
        printf("a + b is 10 \n");
    }
    else
    {
        printf("a + b is not 10 \n");
    }
}
void elseIfStatement()
{
    int a = 9;
    int b = 5;
    int c;

     if(a == 9)
    {
        printf("a is 9 \n");
    }
    else if (a == 10)
    {
        printf("a is 10");

    }
    else if (a == 20)
    {
        printf("a is 20");
    }
    else
    {
        printf("None of the previous requirements were met; a is not 9,10, or 20");
    }
}


void nestedIf()
{
    int x = 10;
    int y = 5;

    if(x == 10)
    {
        if(y == 5)
        {
            printf("X is 10 and y is 5");
        }
        else
        {
            printf("X is 10 but y is not 5");
        }
    }
    else
    {
        printf("x is not 10; doesn't matter what y is. /n");
    }
}

void switchStatement()
{
    char level = '1'; //char takes only 2 bytes, so only one digit is allowed

    switch(level)
    {
    case '1':
        printf("Case level 100 \n");
        break;

    case '2':
        printf("Case level 200 \n");
        break;

    case '3':
        printf("Case level 300 \n");
        break;

    case '4':
        printf("Case level 400 \n");
        break;

    //if none of the cases are met;;
    default:
        printf("None of the cases are met \n");
    }

    printf("Your level is %c00 \n", level);

}

void nestedSwitch()
{
    int x = 5;
    int y = 4;

    switch(x)
    {
    case 5:
        {
            printf("Case 1.0: x is 5. \n");
            switch(y)
            {
                case 4:
                printf("This is case 1.1. y is 4. \n");
                break;

                default:
                    printf("This is case 1.2. y is not 4. \n");
            }

        }
    }
}

