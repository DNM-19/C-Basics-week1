#include<stdio.h>
#include<stdlib.h>
int main(){
float length, width, area;
printf("enter length:");
scanf("%f", &length);
printf("enter width:");
scanf("%f", &width);
area = length * width;
printf("area of a rectangle: %.2f\n", area);




float radius;
printf("enter radius:");
scanf("%f", &radius);
area = 3.14*radius;
printf("area of a circle: %2f\n", area);
return 0;
}
