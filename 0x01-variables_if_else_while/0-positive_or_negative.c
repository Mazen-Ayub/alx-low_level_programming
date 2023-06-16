#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* main : entry point
 * description :assigns a random number to int n everytime 
 * Return : Always 0 (Success)
 */
int main(void)
{ int n;
  srand(time(0));
  n = rand() - RAND_MAX /2;
  if (n > 0)
	  printf("%d is a positive\n" , n);
  else if ( n == 0)
	  printf("%d is a zero\n" , n);
  else if ( n < 0)
	  printf("%d is a negative\n " , n);
  
  return(0);  
}