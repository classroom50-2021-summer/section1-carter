#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // [data_type] [variable_name] = [value];
    float money = 0.98;

    int int_type = money / .25;

    float float_type = money / .25;

    int int_type_rounded = round(money / .25);
    
    printf("%i\n", int_type);
    printf("%f\n", float_type);
    printf("%i\n", int_type_rounded);

    // Our goal is to figure out how many quarters might fit into a certain amount of money.
    // Which division might work most in our favor?
}