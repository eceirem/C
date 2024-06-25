#include <stdio.h>
int main(){
    int t_average, l_costumor, n_customer, sells;
    float wanted_c;
    scanf("%d", &t_average);
    scanf("%d", &l_costumor);
    scanf("%d", &n_customer);
    scanf("%d", &sells);
    wanted_c = l_costumor + (l_costumor/10);
    if (n_customer >= wanted_c && sells > t_average*2)
    {
        printf("Kademe 1");
    }
    else if (n_customer >= wanted_c && sells >= t_average)
    {
        printf("Kademe 2");
    }
    else if (sells >= t_average)
    {
        printf("Kademe 3");
    }
    else{
        printf("Kademe 4");
    }
}