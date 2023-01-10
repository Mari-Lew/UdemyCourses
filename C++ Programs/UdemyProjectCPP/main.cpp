#include <iostream> //input output stream
#include <cmath> //for math operators

#include <ctime> //random numbers
#include <cstdlib>

//ARRAYS
#include <iomanip> //

//String
#include <cstring>


using namespace std; //tells compiler to use std names
using std::setw; //print out an array

//Section 1 : Basics -------------------------------------------
class sectionOne
{
int dataTypeInfo()
    {
        cout << "Data Type Sizes" << endl;

        cout << "Memory size of char = " << sizeof(char) << " byte" << endl;
        cout << "Memory size of int = " << sizeof(int) << " bytes" << endl;
        cout << "Memory size of short int = " << sizeof(short int) << " bytes" << endl;
        cout << "Memory size of long int = " << sizeof(long int) << " bytes" << endl;
        cout << "Memory size of float = " << sizeof(float) <<  " bytes" << endl;
        cout << "Memory size of double = " << sizeof(double) << " bytes" << endl;


    }

    int usingVariables()
    {
        cout << "Local Variables" << endl;

        //declaration
            int a,b,c;
            float e,f,g;

        //initialize em
            a = 6;
            b = 7;
            c = a + b;

            e = 9.3;
            f = 5.1;
            g = e + f;

        cout << "The result of a + b = " << c << endl;
        cout << "The result of e + f = " << g << endl;
    }

    int escapeSequence()
{
   cout << "Escape Sequence" << endl;
   //use \n for a new Line
   cout << "Hello \nWorld" << endl;
    //use \t for a tab space
    cout << "Hello \tWorld" << endl;
    //use \b for backspace
    cout << "Hel\blo \bWorld" << endl;
}


int definingConstants()
{
    //constants that cannot be changed
    //#define is defined outside of the main function
        #define xA 10
        #define yA 17
        #define myNameA "Marissa Lewinski"
        int zA;
        zA = xA + yA;
        cout << "The result of zA is " << zA << endl;
        cout << "The result of name is " << myNameA << endl;

    //const
        const int aA = 10;
        const int bA = 17;
        const string nameA = "Marissa Lewinski";
        const char namA = 'M';

        int cA = aA + bA;
        cout << "The result of cA is " << cA << endl;
        cout << "The result of nameA is " << nameA << endl;
        cout << "The result of namA is " << namA << endl;




}

int staticStorageClasses()
{
    static int x = 5;


    while(x--)
    {
        static int y = 2;
        y++;
        std::cout << "while x = " << x << ", y is " << y << std::endl;
    }
}

};

//Section 2 : Operators -------------------------------------------
class sectionTwo
{
        int arithmeticOperator()
    {
        int x = 8;
        int y= 4;
        int z;

        z = x + y;
        cout << "Adding 8 and 4 together is :" << z << endl;
        z = x - y;
        cout << "Subtracting 8 and 4 together is :" << z << endl;
        z = x * y;
        cout << "Multiplying 8 and 4 together is :" << z << endl;
        z = x / y;
        cout << "Dividing 8 and 4 together is :" << z << endl;
        z = x % y;
        cout << "Modulus of 8 and 4 together is :" << z << endl;

        x++;
        cout << "Incrementing 8 by 1 :" << x << endl;
        x--;
        cout << "Decrementing 9 by 1 :" << x << endl;

    }

    int relationalOperators()
    {
        int a = 7;
        int b = 15;
        int z;

        if(a == b)
        {
            cout << "Variables a and b are equal" << endl;
        }
        else if (a > b)
        {
           cout << "Variable a is larger than variable b" << endl;
        }
        else
        {
            cout << "Variable a is smaller than variable b" << endl;
        }
    }


    int logicalOperators()
    {
        int x = 5;
        int y = 8;
        int z = 0;

        //In this case, we are checking for a 0.
        if(x && y) //Checks for both to fulfill conditions
        {
            cout << "Condition x AND y is fulfilled" << endl;
        }
        else if(x && z)
        {
            cout << "Condition x AND z is fulfilled" << endl;
        }
        else if (x || y) //checks for only one to be fulfilled
        {
            cout << "Condition x OR y is not fulfilled" << endl;
        }
        else if (x || z) //if not x or z
        {
             cout << "Condition x OR z is fulfilled" << endl;
        }
        else
        {
             cout << "No Condition is fulfilled" << endl;
        }
    }

    int bitwiseOperators()
{
    int x = 50;
    int y = 19;
    int z = 0;

    z = x & y; //and
    cout << "The result of x & y is " << z << endl;
    z = x | y; //or
    cout << "The result of x | y is " << z << endl;
    z = x ^ y; //XOR
    cout << "The result of x ^ y is " << z << endl;
    z = x << 3; //Shift left 3 times
    cout << "The result of x << is " << z << endl;
    z = x >> 6;
    cout << "The result of x >> 6 is " << z << endl;


}


};

//Section 3 : Loop Systems -------------------------------------------
class sectionThree
{
    int whileLoops()
    {
     int x = 20;
     while (x < 50) //20 to 49
     {
         cout << "The value of x is: " << x << endl;
         x++;
     }
     while (x >= 1) // 49 to 1
     {
         cout << "The value of x is: " << x << endl;
         x--;
     }
    }

    int forLoops()
{
    int x ;

    for(x = 20; x < 50 ; x++)
    {
        cout << "The result of x is " << x << endl;
    }
}

int doWhileLoop()
{
    int x = 2;

    do
    {
        cout << "The result of x = " << x << endl;
        x++;
    }
    while ( x<= 50 );

}

int nestedForLoop()
{
    cout << "Nested for Loop" << endl;
    int x, y;

    for (x = 2; x <= 150; x++)
    {
        //cout << "Nested x" << endl;
        for (y = 2; y <= (x/y); y++)
        {
            //cout << "Nested y" << endl;

            if(!(x%y)) //if not a prime number
            {
                break;
            }
        }
        if (y > (x/y))
            {
                cout << "This is a prime number: " << x << endl;
            }
    }

    return 0;

}

int breakStatement()
{
    int x = 20;

    while (x <=50)
    {
        cout << "The value of x : " << x << endl;
        x++;

        if(x >= 35)
        {
            break;
        }
    }
}


int continueStatement()
{
    int x = 20;

    while(x <= 50)
    {
        if(x == 35)
        {
            x = x+1; //skip
            continue; //keep goin
        }
        cout << "The value of x: " << x << endl;
        x++;
    }
}

int goToStatement()
{
    int x = 20;

    HELLO : do
    {
        if(x >=35 && x <= 40)
        {
            x++;
            goto HELLO;
        }
        cout << "The value of x is " << x << endl;
        x++;
    }while (x <= 50);
}

};

//Section 4 : Decision making statements -------------------------------------------
class sectionFour
{
    void ifStatements() //joined with else and else if
    {
        int x;
        int y;
      for(x = 0; x <= 20; x++)
      {
             if(x > 10 && x != 15)
              {
                cout << "X is " << x << endl;

                if(y < 100)
                {
                    cout << "y is: " << y << endl;
                    y++;
                }

              }
              else if ( x == 15)
              {
                cout << "X is exactly 15! \n";
              }
              else
              {
                  cout << "X is less than 10" << endl;
              }
      }
    }

    int switchStatement()
{
    char grade;
    cin >> grade;

    cout << "Your current grade is: " << grade << endl;

    switch(grade)
    {
        case 'A':
            cout << "Excellent work" << endl;
            break;
        case 'B':
            cout << "Amazing work" << endl;
            break;
        case 'C':
            cout << "Standard work" << endl;
            break;
        case 'D':
            cout << "Not good work" << endl;
            break;
        case 'F':
            cout << "Poor work" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
}
};


//Section 5 : Functions -------------------------------------------
class sectionFive //go over this more; his videos made no sense at all
{
    void num_swap(int num1, int num2);

void callByValue()
{
    int num1 = 28;
    int num2 = 56;

    cout << "Numbers before swapping = " << num1 << "," << num2 << endl;

    swap(num1,num2);

    cout << "Numbers after swapping = " << num1 << "," << num2 << endl;

}

int callByPointer()
{
    int x = 70;
    int y = 67;

    cout << "Numbers before swapping = " << x << "," << y << endl;


    swap(x,y);

    cout << "Numbers after swapping = " << x << "," << y << endl;

}

void swap_num(int &num1, int &num2); //asterix are for pointer, & for references

void callByReference()
{
    int x = 47;
    int y = 98;

    cout << "Numbers before swapping = " << x << "," << y << endl;

    swap(x,y);

    cout << "Numbers after swapping = " << x << "," << y << endl;

}

void mathOperators()
{
    //for this one, make sure we have <cmath> included
    int x = 67;

        cout << "Sqrt of x = " << sqrt(x) << endl;
        cout << "Power of x | Second power = " << pow(x,2) << endl;
        cout << "Absolute value of x = " << abs(x) << endl;


}

void randomNumbers()
{
    int x,y;
    srand((unsigned)time(NULL));

    for(x = 0; x <= 20; x++)
    {
        y = rand();
        cout << "Random Number:" << y << endl;
    }

}
//_______________________________________________________________________________________
};

//Section 6 : Arrays -------------------------------------------
class sectionSix
{
    void introArrays()
    {
        //Arrays are used to store collections of data.
        int theArray[20];
        //generate array
        for(int a = 0; a <20; a++)
        {
            theArray[a] = a + 1000;
        }

        cout << "Elements X" << setw(28) << "New X Values" << endl;

        for (int z = 0; z < 20; z++)
        {
            cout << setw(3) << z << setw(30) << theArray[z] << endl;//setw: setting first character to start from the end of the element
        }
    }

    void multidimArray()
    {
        //have array that has different sizes. ex. type arrayName [size1][size2]

        int num[6][2] = {{0,0},{1,2},{2,4}, {3,6}, {4,8}, {5,10} };//6 rows and 2 columns

        for (int x = 0; x < 6; x++)
        {

            for (int y = 0; y < 2; y++)
            {
                cout << "num [" << x << "][" << y << "] : ";
                cout << num[x][y] << endl;
            }
        }
    }

    void arrayPointer()
{
    //Reminder: pointer NEEDS asterix
    // assigning address for the first element of the array. double *p

    double hello[7] = {200.7, 46.9, 7.0,54.3, 24.0, 5.5, 1002.9};
    //create pointer
    double *p;
    //address of array to poointer p
    p = hello;

    for(int x = 0; x < 7; x++)
    {
        cout << "'(p + " << x << ") : " << endl;
        cout << *(p + x) << endl;
    }
}

//-----
double avg(int arr[], int size)
{
    //c++ wont allow a full array as an argument to functions
    int x, add = 0;
    double average;

    for(x = 0; x < size; ++x)
    {
        add += arr[x]; //concatenation
    }

    average = double(add)/size;

    return average;
}

int passArraytoFun()
{
    int hello[7] = {78,205,57,45,87,90,12928};
    double average;

    average = avg(hello,7);

    cout << "The average is: " << average << endl;
}

int * Random_number() //use pointer
{
    int x;

    static int num[10]; //holds 20 random numbers
    //set the seed
    srand((unsigned) time(NULL));

    for(x = 0; x < 10; ++x)
    {
        num[x] = rand();
            cout << num[x] << endl;


    }

    return num;

}


void returnArrayfromFun()
{
    int * point;

    point = Random_number(); //use pointer

    for(int x = 0; x< 10; x++)
    {
        cout << "*(point + " << x << ") : " << *(point + x) << endl;
    }

}

};

//Section 7 : Intro to Strings -------------------------------------------
class sectionSeven
{
void introString()
{
    cout << "-- Testing basic print --" << endl;

    char name0[8] = {'M','a','r','i','s','s','a', '\0'};

    cout << name0 << endl;

    //strcpy
    char name1[20] = "String1";
    char name2[20] = "String2";

    strcpy(name2, name1);
    cout << "-- Testing strcpy --" << endl;
    cout << "First string: " << name1 << endl;
    cout << "Second String: " << name2 << endl;


    //strcat(s1,s2) : concatenates s2 to the end of s1
        cout << "-- Testing strcat --" << endl;
        strcat(name1, name2);
        cout << "First string: " << name1 << endl;
        cout << "Second String: " << name2 << endl;


    //strlen(s1) : returns length of string
        cout << "-- Testing strlen --" << endl;

        cout << "First string: " << name1 << endl;
        cout << "First String Length: " << strlen(name1) << endl;
}



void stringClasses()
{
    string name1 = "String1";
    string name2 = "String2";
    string name3;
    int length;

    cout << "Add string 1 and string 2 together" << endl;
    name3 = name1 + name2;
    cout << name3 << endl;

    cout << "Add a space" << endl;
    //want a space inside?
    name3 = name1 + " " + name2;
    cout << name3 << endl;

    cout << "Copy string1 into string3" << endl;
    name3 = name1;
    cout << name3 << endl;

    cout << "Size using .size" << endl;
    length = name3.size();
    cout << length << endl;

}

};


//Section 8 : Pointers -------------------------------------------
class sectionEight
{
void pointersIntro()
{
    int name;
    float hello;
    double x;
    char y;

    cout << "Print out the memory location" << endl;

    cout << &name << endl;
    cout << &hello << endl;
    cout << &x << endl;
    cout << &y << endl;

    //pointers
    int *a;
    float *b;
    double *c;
    char *d;

    name = 10;

    //store address of variable name inside pointer
    a = &name;
    cout << " " << endl;
    cout << name << endl;
    cout << "pointer:" << *a << endl;
    cout << "address:" << a << endl;
    //pointer: var whose value is value of another var



}
  void nullPointer()
    {
        //null: 0; does not exist.
        int *name = NULL; //No address assigned
        cout << name << endl;
    }


void pointerIncDec()
{
    int name[3] = {40, 21, 78};
    int *na;

    na = name;

    cout << "Increment pointer" << endl;
    for(int x = 0; x <3; x++) //check address of all
    {
        cout << "Address : [" << x << "] = " << na << endl;
        cout << "Value : [" << x << "] = " << *na << endl;
        na++;

    }

     cout << "Decrement pointer" << endl;
    int nameDec[3] = { 21, 40, 78};
    int *naDec;
    naDec = &nameDec[2];

    for(int x = 3; x>0; x--)
    {
        cout << "Address : [" << x << "] = " << naDec << endl;
        cout << "Value : [" << x << "] = " << *naDec << endl;
        naDec--;
    }
}


void comparePointer()
{
    int name[3] = {45, 60, 96};
    int *na;
    int x = 0;

    na = name;

    while(na <= &name[2])
    {
        cout << "Address: " << na << " Value " << *na << endl;
        na++;
        x++;
    }
}

void arrayPointer()
{
    // & = address
  int name[6] = {56,78,23,21,98,100};
  int * na[6];

  for(int x = 0; x < 6; x++)
  {
      na[x] = &name[x];

      cout << "| [" << x << "] | Address: " << na[x] << " | Value: " << *na[x] << endl;
  }
}

void stringArrayPtr()
{
    string name[5] = {"Lily", "Rocky", "Princeton", "Bentley", "Soleil" };
    string *na[5];

    for(int x = 0; x < 5; x++)
    {
        na[x] = &name[x];

        cout << "Address: " << na[x] << "| Name: " << *na[x] << endl;
    }


}


void pointerPointer()
{
    //a pointer to a pointer
    int name = 60;
    int *na1;
    int **na2; //double pointer

    na1 = &name; //pointer to the address of name
    na2 = &na1; //pointer to the address of the first pointer

    //need asterisk so they give the values and not the address
    cout << " | Number :" << name << " | Pointer 1: " << *na1 << " | Pointer 2: " << **na2 << " | " << endl;

}
};

//Section 9 : Reference -------------------------------------------
class sectionNine
{
    void introReference()
{
    //Talking about a var that has already existed. CANNOT Have a null reference.
    int x;
    float y;

    //reference variable
    int& a = x; //referenced a to x
    float& b = y; //referenced b to y

    x = 7;
    y = 7.9;
    cout << "X : " << x << " | A: " << a << endl;
    cout << "Y : " << y << " | B: " << b << endl;
}


void passParamSwap(int& a, int& b)
{
    int z;
    z = a; //save address of a into z
    a = b; //^ of b is in a
    b = z;

    return;

}
void passParamRef()
{
    int x = 78;
    int y = 50;

    cout << "X = " << x << "| Y = " << y << endl;
    cout << "Swap numbers " << endl;

    passParamSwap(x,y); //interchange x and y

    cout << "X = " << x << "| Y = " << y << endl;

}

void currDateTime()
{
    time_t now = time(0); //current time based on the system
    //convert it to the string;

    char* dT = ctime(&now); //address is now

    cout << "Current date and time: " << dT << endl;

    //convert
    struct tm * gmtm;
    gmtm = gmtime(&now);
    dT = asctime(gmtm);
    cout << "Current date and time: " << dT << endl;

    return;

}

void timeUsingStruct()
{
    time_t now = time(0);

    cout << "Format time using struct tm" << endl;

    tm *mytime =  localtime(&now);

    cout << "Year: " << 1900 + mytime ->tm_year << endl;
    cout << "Year without 1900: " << mytime ->tm_year << endl;

    cout << "Month: " << 1 + mytime ->tm_mon << endl;
    cout << "Month without 1: " << mytime ->tm_mon << endl; //off by 1

    cout << "Day: " << mytime ->tm_mday << endl;

    cout << "Time: " << mytime ->tm_hour << ":" << 1 + mytime ->tm_min << ":" << 1 + mytime ->tm_sec << endl;

}
};
//Section 10 : Short coding exercises -------------------------------------------
class sectionTen
{

void userInput()
{
    //ints
    int x,y;
    cout << "Please give a number: " << endl;
    cin >> x;
    cout << "Please give a second number: " << endl;
    cin >> y;

    cout << "Your first number is:" << x << endl;
    cout << "Your second number is:" << y << endl;

    //strings
    char stringArr[200];
    string anotherStr;

    cout << "Insert some strings: " << endl;
    cin >> stringArr;

    cout << "Insert another string:" << endl;
    cin >> anotherStr;


    cout << "You entered:" << stringArr <<endl;
    cout << "You entered:" << anotherStr <<endl;


}

void primeNumbers()
{
    int x,y;

    for(x = 2; x <= 200; x++)
    {
        for(y = 2; y <= (x/y); y++)
        {
            if(!(x%y))
            {
                break;
            }
        }
        if(y > (x/y))
            {
                cout << "Prime: " << x << endl;
            }
    }

}

void triangleArea()
{
    float base,height, area;

    cout << "Insert Triangle Height: " << endl;
    cin >> height;
    cout << "Insert Triangle Base: " << endl;
    cin >> base;

    area = (base * height)/2;

    cout << "Area: " << area << endl;
}


void evenOddNums()
{
    int x;

    cout << "EVEN OR ODD?" << endl;
    cout << "Insert a number: " << endl;
    cin >> x;

    if(x%2 == 0)
    {
        cout << "This number is even!" << endl;
    }
    else
    {
        cout << "This number is odd! " << endl;
    }
}


void messWithNumbers()
{
    int save, x,y,z, sum;
    int a,b,c, digiSum;

    //doesn't /need/ to be between 0 and 100; so I'm not gonna add a check
    cout << "Insert first number between 0 and 100: " << endl;
    cin >> x;
    save = x;

    cout << "Insert second number between 0 and 100:: " << endl;
    cin >> y;

    cout << "Insert third number between 0 and 100:: " << endl;
    cin >> z;


    cout << "Adding Digits" << endl;
    do{
        a = x%10;
        digiSum = digiSum + a;
        x = x/10;

    } while(x != 0);
    cout << "__________________________________________________________" << endl;
    cout << "Digits added from first number: " << digiSum << endl;

    x = save;

    cout << "__________________________________________________________" << endl;
    cout << "Greatest of three" << endl;
    cout << "Numbers: " << x << ", " << y  << ", " << z << endl;

    if (x >= y && x >= z)
    {
        cout << x << " is the greatest." << endl;;
    }
    else if (y >= x && y >= z)
    {
        cout << y << " is the greatest." << endl;;
    }
    else if(z >= y && z >= y)
    {
        cout << z << " is the greatest." << endl;;
    }
    cout << "__________________________________________________________" << endl;
    cout << "Swapping" << endl;
    cout << "Numbers Pre-Swap: " << x << ", " << y  << ", " << z << endl;

    save = x;
    x = y;
    y = z;
    z = save;

    cout << "Numbers Post-Swap: " << x << ", " << y  << ", " << z << endl;
    cout << "__________________________________________________________" << endl;
    cout << "Calculate Percentage: " << endl;
    sum = x + y + z;
    b = 200;

    cout << "The sum of these 3 numbers: " << sum << endl;
    c = (sum/b) * 100;
    cout << "Percentage: " << c << endl;


}
void grossSal()
{
    int basic, x, y, gross;

    cout << "Insert your basic salary: ";
    cin >> basic;

    x = (10*basic)/100;
    y = (12*basic)/100;

    gross = basic + x + y;
    cout << "Your gross salary: " << gross << endl;
}

void simpInterest()
{
    //Simple interest
    int prinAmount;
    float rate, period, simpleInterest;

    cout << "Insert Principal Amount: ";
    cin >> prinAmount;

    cout << "Insert Rate: ";
    cin >> rate;

    cout << "Insert period: " ;
    cin >> period;

    simpleInterest = (prinAmount * rate * period)/100;
    cout << "The simple interest is: " << simpleInterest << endl;
}

void leapYear()
{
    int yr;

    cout << "Insert a year: " << endl;
    cin >> yr;

    if(yr%4 == 0)
    {
        cout << yr << " is a leap year" << endl;
    }
    else{
        cout << yr << " is not a leap year" << endl;
    }
}

int HCF(int x, int y)
{
    if(y != 0)
    {
        return HCF(y,x%y);
    }
    else
        return x;
}

void HCFPrompting()
{
    int x,y;

    cout << "Insert first number: " << endl;
    cin >> x;
    cout << "Insert second number: " << endl;
    cin >> y;

    cout << "The HCF is: " << HCF(x,y) << endl;
}



};

//Running code below --------------------------------------------------------------------------------------------------

void LCM()
{
    int x,y, maxi;

    cout << "Insert first number: " << endl;
    cin >> x;
    cout << "Insert second number: " << endl;
    cin >> y;

    maxi = (x>y)?x:y; //checks value between x and y and stores the value into maxi

    while(true) //already checked if x > y in maxi
    {
        if(maxi%x == 0 && maxi%y == 0)
        {
            cout << "The LCM is: " << maxi << endl;
            break;
        }
        else
        {
            maxi++;
        }
    }

}

int main()
{
    //cout = console output
    cout << "This is the main function for the c++ portion \n" << endl;

    LCM();

    return 0;
}
