#include <stdio.h>
int main(){
    const int pi = 3;
    int r;
    int area;
    int circumference;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    circumference = 2*pi*r;
    area = 2*pi*r*r;
    printf("The circumference of circle is %d\n",circumference);
    printf("The area of circle is: %d",area);
}