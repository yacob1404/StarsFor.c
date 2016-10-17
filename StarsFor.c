#include <stdio.h>

int main ()
{
 int i;
 int j;
 int stars;

//Get user input
 printf("Enter number of stars: ");
 scanf("%i", &stars);

//Main loop (i counter)
 for (i = 1; i <= stars; i++)
 {
//Secondary loop (j counter)
  for (j = 1; j <= i; j++)
  {
   printf("* ");
  }
  printf("\n");
 }

 return 0;
}
