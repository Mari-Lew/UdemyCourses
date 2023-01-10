/*
    This file is based off of udemy codecamp for learning C, C++, C#, java, and Python
    Name: Marissa
    Date: 11/1/2022
*/

//Include custom header [ after saving fileName.h ]
    #include "customHeader1.h"

    #define Hello "This is header file"
    #define str "This is the string variable"

void syntax_practice()
{
    //How do print out outputs?
        printf("Hello\n"); //use \n for next line
        printf("Hola\t"); //use \t for a tab
        printf("Hi\n ");
}

void beginnerVideos()
{
    //Create a variable
        int day = 1; //whole numbers
        int month = 11;
        int year = 2022;

        float age = 22.0; //float is for decimal points

        char character = 'A';

    //Printing things off
        printf("Start a new C project!\n");
        printf("Today's date is %d / %d / %d \n", month, day, year);

        printf("Let's input a string: %s \n", "a String");
        printf("Let's input a decimal: %d \n", 80);
        printf("Let's input a float: %f \n", 896.34234);
        printf("Let's shorten that float: %.2f \n", 896.34234);

        printf("Let's test define: %s \n", str);

}

/* Video 12 */
void arrayVideo()
{
    //variable where only 20 characters will be saved to memory
        char me[20] = "marissa Lewinski";
        printf("The data value is %s \n", me);
    // Change the letter at index 0
        me[0] = 'M';
        printf("The data value is %s \n", me);

    //Change what is stored in the array entirely
        strcpy(me,"Hello World");
        printf("The data value is %s \n", me);
}

/* Custom header files - video 13 */
void headerFile()
{
    int school;
    school = STUDENTS + 30;

    printf("Hello! %s \n", NAME);
    printf("There are %d students \n", school);
}

/* User Input - video 14 */
void userInputTest()
{
        char firstName[20]; //20 for highest char amount expected
        char lastName[20];
        int age;

        printf("What is your first name? \n");
        scanf("%s", firstName);

        printf("What is your last name? \n");
        scanf("%s", lastName);

        printf("What is your age? \n");
        scanf("%d", &age); //

        printf("%s %s is %d years old \n", firstName, lastName,age);

    /* Calculate user inputs - video 16 */
        float x;
        float y;
        float z;

        printf("%s , please input a number \n", firstName);
        scanf("%f", &x);

        printf("%s , please input a second number \n", firstName);
        scanf("%f", &y);

        z = x * y;
        printf("%s , the multiplication results of your numbers is: %f \n", firstName, z);


}

/* Math Operators - video 15 */
void mathOperations()
{
    int x;
    int y;
    int z;

    x = 4;
    y = 8;

    z = x + y;
    printf("The result of z is %d \n", z);
    z = x - y;
    printf("The result of z is %d \n", z);
    z = x * y;
    printf("The result of z is %d \n", z);
    z = x / y;
    printf("The result of z is %d \n", z);
    // display remainder
    z = x % y; //% is the modulus
    printf("The result of z is %d \n", z);
}

/* Typecasting - video 17 */
void typeCasting()
{
    int x = 12;
    int y = 10;
    int z = 25;
    float result;

    result = ((float)x * (float)y)/(float)z; //all int values have been converted to float
    printf("Result is: %.1f", result);

}
