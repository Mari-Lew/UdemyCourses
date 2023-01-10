int mainPartOne()
{
    int x = 400;
    int y = 503;
    int output;

    output = max(x,y);
    printf("The maximum number is %d \n", output);
    return 0;

}

int max(num1,num2) //Loop that
{
    int output;
    if(num1 > num2)
    {
        output = num1;
    }
    else
    {
        output = num2;
    }

    return output;
}
//----------------------------------------------------------------------
//Arrays:
int arrayExercise()
{
    int x;
    int y;
    int z[5]; //array; 0 to 5

    for(x = 0; x <= 5; x++)
    {
        z[x] = x + 10;
    }

    for(y = 0; y <= 5; y++)
    {
        printf("Index [%d] = %d \n", y, z[y]);
    }
}
//----------------------------------------------------------------------
//Avg Number:
double averageNumber(int nums[], int length)
{
    int x;
    double average, total;

    for(x = 0; x < length; ++x)
    {
        total += nums[x];
    }

    average = total / length;

    return average;

}

int mainAverage()
{
    int numbers[6] = {45,23,54,32,1,9};
    double result;

    result = averageNumber(numbers, 6);
    printf("The average number is %.2f \n", result);
    return 0;
}
