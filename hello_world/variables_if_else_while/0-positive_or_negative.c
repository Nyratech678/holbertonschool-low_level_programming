#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - assigns a random number to n and prints its sign */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code starts here */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
/* Your code ends here */
return (0);
}
