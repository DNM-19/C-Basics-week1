#include<stdio.h>
int main(){
int num1, num2;
float Sum, Difference, Product,Quotient;
printf("enter first number:");
scanf("%d", &num1);
printf("enter second number:");
scanf("%d", &num2);

Sum = num1 + num2;
Difference = num1 - num2;
Product = num1 * num2;
Quotient = num1 / num2;

if(num2 == 0){
printf("error: division by 0 is not allowed");}
return 0;
}

