#include <cs50.h>
#include <stdio.h>

int main(void)
{  
    int squirrels = get_int("How many squirrels do you have? ");

    if (squirrels > 10)
    {
        printf("That's really too many squirrels.\n");
    }
    else if (squirrels < 0)
    {
        printf("That's too few squirrels.\n");
    } 
    else
    {
        printf("That's a good number of squirrels!\n");
    }

    /*
    How would we modify this program to tell us, more simply, whether we
    have a good number of squirrels or not?

    Conditional (or "Relational") operators:

    Less than: <
    Greater than: >
    Equal to: =
    Less than or equal to: <=
    Greater than or equal to: >=

    Logical operators:

    And: && (Returns true if both of two conditions are true)
    Or: || (Return true if one of two conditions are true)
    Not: ! (Place in front of a condition to negate it, e.g. "!=" for not equal)
    */

    
    squirrels = get_int("No really, how many squirrels do you have? ");

    // Write your if statement and condition below!

}

