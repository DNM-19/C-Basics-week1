#include<stdio.h>
int mai(){
char name[5];
int age,i;
printf("enter name");
scanf("%49s", &name);
printf("enter age");
scanf("%d", age);
printf("hello %s you are %d years old!\n", name, age);
printf("your favorite hobby is coding");
return 0;
}
