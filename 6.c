#include<stdio.h>

int main(){
    int age;
    printf("Enter Your Age:\n");
    scanf("%d", &age);
    if(age<=18)
        printf("You cannot Drive!\n");
    else if(age>18 && age<=65)
        printf("You can Drive!\n");
    else
        printf("You cannot Drive\n");
    return 0;
}
