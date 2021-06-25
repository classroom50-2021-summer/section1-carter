#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* 
    Let's prompt a user for how many squirrels they have
    until they give us a good number of squirrels.
    What kind of loop might help us do so?
    */

    /*
    A while loop checks if a condition is true.
    If it is, it then repeats the code until the condition is false.
    */

    float cash = 15.00;
    while(cash > 0)
    {
        cash = cash - 5;
        printf("I spent $5, and now I have %f.\n", cash);
    }
    printf("I'm broke!\n");

    /*
    A "do while" loop first executes the code in its body once,
    and then continues to execute the code as long the condition is true.
    */

    

    /*
    A "for loop" initializes a 

    */

    int squirrels = get_int("How many squirrels do you have? ");

    printf("That's a good number of squirrels!\n");
}