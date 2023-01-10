#include <time.h>
/**
  *   Pointers in C programming
  *   Pointers are variables whose value is the address of another variable
**/
int pointerLesson1()
{
   int xyz = 10;
   //create a pointer;
   int *pointer;

   //store address into the pointer variable
   pointer = &xyz; //address stored. Use & for address pointing.

   //%x is for addresses
   printf("The address of xyz is %x \n", &xyz);

   printf("The address of pointer is %x \n", pointer); //the pointer does not need the &

   //Both of them will be the same!

   printf("The value of pointer is %d \n", *pointer); //should be 10!
}
//
//int nullPointerLesson()
//{
//
//    int *pointer;
//    int xyz = 4;
//    pointer = &xyz;
//    printf("the address of *pointer is %x \n", pointer);
//
//    int *pointerTwo = NULL;
//    printf("the address of *pointer is %x \n", pointerTwo);
//
//    int *pointerThree = NULL;
//    int abc = 10;
//    pointerThree = &abc; //If this is commented out, pointerThree will be 0
//    printf("the address of *pointer is %x \n", pointerThree);
//}


int incrementPointer()
{
    int xyz[] = {12,13,14,15,16};
    int *pointer;
    int w;

    pointer = xyz;

    for(w = 0; w<5; w++)
    {
        printf("The address of xyz[%d] = %x \n", w, pointer);
        printf("The result of xyz[%d] = %d \n", w, *pointer);

        pointer++;
    }
}


int decrementPointer()
{
    int xyz[] = {12,13,14,15,16};
    int *pointer;
    int w;

    pointer = &xyz[5-1]; //one of many differences to decrementation

    for(w = 5; w > 0; w--)
    {
        printf("The address of xyz[%d] = %x \n", w, pointer);
        printf("The result of xyz[%d] = %d \n", w, *pointer);

        pointer--;
    }
}

int stringVarArray()
{
    char *myPets[] = {"Lily","Soleil","Princeton","Rocky","Bentley"};
    int x = 0;

    for(x = 0; x < 5; x++)
    {
        printf("The name of myPets[%d] = %s \n", x, myPets[x]);
    }
}

int pointersToPointers()
{
    int xyz;
    int *pointerOne;
    int **pointerTwo;

    xyz = 10;
    //take address of xyz and put it in pt1
    pointerOne = &xyz;
    //address of pt1 saved into pt2
    pointerTwo = &pointerOne;

    printf("The value of xyz = %d \n", xyz );
    printf("The value of pointerOne = %d \n", *pointerOne);
    printf("The value of pointerTwo = %d \n", **pointerTwo );
}

//-----------------------------------------------------------------------
void timegenerator(unsigned long *pointer)
    {
        *pointer = time(NULL);
    }

int passFunPointer()
{
    //Generate time in seconds
    unsigned long seconds;

    timegenerator(&seconds);

    printf("Time generator in seconds is %ld \n", seconds);

}

//-----------------------------------------------------------------------

int * randomNumberGenerator()
{
    static int randNum[5];
    int x;

    srand((unsigned) time(NULL));
    for(x = 0; x < 5; ++x)
    {
        randNum[x] = rand();
        printf("The value of number is %d \n", randNum[x]);
    }
    return randNum;
}


int randMain()
{
    int x;
    int *pointer;
    pointer = randomNumberGenerator();

    return 0;
}


//-----------------------------------------------------------------------

int * randomNumberGeneratorExtended()
{
    static int randNum[5];
    int x;

    srand((unsigned) time(NULL));
    for(x = 0; x < 5; ++x)
    {
        randNum[x] = rand();
        printf("The value of number is %d \n", randNum[x]);
    }
    return randNum;
}


int randMainExtended()
{
    int x;
    int *pointer;
    pointer = randomNumberGenerator();

    for(x = 0; x < 5; x++)
    {
        printf("The returned value of the array at [%d] is %d \n", x , *(pointer + x));
    }

    return 0;
}
