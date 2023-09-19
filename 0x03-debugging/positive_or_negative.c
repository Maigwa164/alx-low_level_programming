#include "main.h"
/**
 * positive_or_negative - function to check positive and negative number
 * @i : data type of type integer
 * main - Entry point of the code
 * 0 : number to be checked
 * Return : Always 0
 */
void positive_or_negative(int i)
{
if (i < 0)

{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
