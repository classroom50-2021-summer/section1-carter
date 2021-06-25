#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* 
    Let's prompt a user for how many squirrels they have
    until they give us a good number of squirrels.
    What kind of loop might help us do so?
    */

    /*
    A while loop checks if a condition is true.
    If it is, it then repeats the code it contains until the condition is false.

    For example:
    */

    float cash = 15.00; // Start with $15

    while(cash > 0) // As long as cash is greater than $0...
    {
        cash = cash - 5; // "Spend" (subtract) $5 from cash
        printf("I spent $5, and now I have $%f.\n", cash); // Print out remaining cash
    }

    printf("I'm broke!\n"); // Once cash is not greater than $0, print "I'm broke"!

    /*
    A "do while" loop first executes the code in its body once,
    and then continues to execute the code as long the condition is true.

    For example:
    */

    int sum = 0; // Start with a sum of 0
    int new_num; // Create an integer called new_num
    do
    {
        new_num = get_int("Give me a new number: "); // Give new_num a user-inputted integer
        sum = sum + new_num; // Add new_num to sum;
    } 
    while (sum < 10); // Do the code in brackets again, only if sum is still less than 10
    printf("You've summed to 10 or higher!\n");
    
    /*
    A "for loop" creates a variable, and uses that variable
    to keep track of how many times it should loop.
    */

    int length = 5;

    for (int i = 0; i < length; i++)
    {
        printf("#");
    }

    printf("\n");
    printf("I printed a line with %i hashes, by printing one hash at a time, %i times!\n", length, length);

    /* 
    Using the following code to get the number of squirrels a user has,
    encase the code in a loop that will keep asking until they give us 
    a good number of squirrels!
    */ 

    int squirrels = get_int("How many squirrels do you have? ");

    printf("That's a good number of squirrels!\n");
}