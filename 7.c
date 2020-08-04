#include<stdio.h>

int main(){
    // Calculating Area of A Rectangle
    // Inspired From Code With Harry Youtube Channel
    int length, breadth;
    printf("Enter the Length of Rectangle\n");
    scanf("%d",&length);
    printf("Enter the Breadth of Rectangle\n");
    scanf("%d",&breadth);
    int area = length*breadth;
    printf("The Area is %d\n",area);
    return 0;
}
