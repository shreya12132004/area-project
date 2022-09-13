
#include<stdio.h>
int addition(int a,int b){
int sum;
sum=a+b;

return sum;


}


int main(){
int a,b;

printf("Enter the value of a: ");
scanf("%d",&a);

printf("Enter the value of b: ");
scanf("%d", &b);

int res = addition(a,b);
printf("Output:%d",res);

return 0;







}
