/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   scanf("%d %d",&no1,&no2);
   minimum=no1>no2;
   printf("minimum=%d",minimum);
   printf("%d ", maximum(no1, no2));
   scanf("%d %d",&no1,&no2);
   maximum=no1<no2;
   printf("maximum=%d",maximum);
   printf("%d ", multiply(no1, no2));
   scanf("%d %d",&no1,&no2);
   multiply=no1*no2;
   printf("multiply=%d",multiply);
   

   
   
   return 0;
}
