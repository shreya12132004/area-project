#include<stdio.h>

int main(){
  float volume,radius,height;
  printf("enter radius of cylinder:");
  scanf("%f",&radius);

  printf("enter height of cylinder:");
  scanf("%f",&height);
  volume  = (22*radius*radius*height)/7;

 printf("volume of cylinder :%f\n",volume);

 return 0;


}

