#include<stdio.h>
#define PI 3.14f
void main(){
   float radius,perimeter;

   printf("enter radius of the circle : \n");
   scanf("%f",&radius);

   perimeter = 2*PI*radius;
   printf("perimeter of the circle :%0.4f\n",perimeter);

return 0;


}
