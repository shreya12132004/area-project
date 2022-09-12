#include<stdio.h>

int main(){
   float width,height,perimeter;

   printf("\n enter the width of rectangle:");
   scanf("%f",&width);

   printf("\n enter the height of rectangle: ");
   scanf("%f",&height);

   perimeter = 2*(width+height);


  printf("\n perimeter of rectangle :%.2f",perimeter);

   return 0;




}
