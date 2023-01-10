int strings()
{
   char display[12] = {'H','e','l','l','o',' ','W','o','r','l','d', '\0'}; //no character string to help set the memory. Tell system it is the end.
    printf("This says: %s \n", display);
}


int stringFunctions()
{
    char firstString[] = "First";
    char secondString[] = "Name";
    char thirdString[] = " ";
    int length;

    strcpy(firstString, secondString);
    printf("The result of strcpy firstString is: %s \n", firstString);
    printf("The result of strcpy secondString is: %s \n", secondString);

    //Joining two strings together; concatenation
    strcat(firstString,secondString);
    printf("The result of strcat is: %s \n", firstString);

    //figure out the length
    length = strlen(firstString);
    printf("The result of strlen is: %d \n", length);


}

