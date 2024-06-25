#include <stdio.h>
#include <math.h>
int main(){
    double A = sqrt(16);
    double B = pow(2,3);
    int C = sqrt(9);
    int D = round(3.5); //matematik kurallarına göre yuvarlar.
    int E = ceil(3.5); //üzerine yuvarlar.
    int F = floor(3.5); //tabanına yuvarlar.
    int G = fabs(-254);
    double H = log(5);
    double I = sin(45);
    double J = cos(45);
    double L = tan(45);
    printf("\n%.2lf",A); 
    printf("\n%d",D);
    printf("\n%d",E);
    printf("\n%d",F);
    printf("\n%d",G);
    printf("\n%lf",H);
    printf("\n%lf",I);
    printf("\n%lf",J);
    printf("\n%lf",L);
}