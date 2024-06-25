#include <stdio.h>
#include <math.h>
float koordinatlar();
float uzaklik(float x1, float y1, float x2, float y2);
int main(){
    printf("%.2f", koordinatlar());
    return 0;
}
float koordinatlar(){
    float x1, y1, x2, y2;
    scanf("%f\n%f\n%f\n%f", &x1, &y1, &x2, &y2);
    return uzaklik(x1,y1,x2,y2);
}
float uzaklik(float x1, float y1, float x2, float y2){
    float distance;
    distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    return distance;
}