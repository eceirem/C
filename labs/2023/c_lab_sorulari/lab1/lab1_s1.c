#include <stdio.h>
#include <math.h>
int main(){
    int taksit = 10;
    int m2_34 = 5000;
    int m2_06 = 4500;
    int m2_35 = 4000;
    int m2_01 = 3500;
    int m2_55 = 3000;
    int sehirKodu;
    int evinMetraKaresi;
    int aylikOdenebilecekTaksit;
    int pesinat;
    int evinFiyati;
    float yillikFaiz;
    float kalanBorc;
    float odenecekFaizMiktari;
    float odenecekAnaparaMiktari;
    scanf("%d", &sehirKodu);
    scanf("%d", &evinMetraKaresi);
    scanf("%d", &aylikOdenebilecekTaksit);
    scanf("%d", &pesinat);
    scanf("%f", &yillikFaiz);
    int m2Bedeli;
    if(sehirKodu == 34){
        evinFiyati = m2_34 * evinMetraKaresi;
        printf("%d\n",evinFiyati);
    }
    if (sehirKodu == 06){
        evinFiyati = m2_06 * evinMetraKaresi;
        printf("%d\n",evinFiyati);
    }
    if (sehirKodu == 35){
        evinFiyati = m2_35 * evinMetraKaresi;
        printf("%d\n",evinFiyati);
    }
    if (sehirKodu == 01){
        evinFiyati = m2_01 * evinMetraKaresi;
        printf("%d\n",evinFiyati);
    }
    if(sehirKodu == 55){
        evinFiyati = m2_55 * evinMetraKaresi;
        printf("%d\n",evinFiyati);
    }
    float aylikFaiz = (yillikFaiz)/(12.0*100.0);
    printf("%.4f\n", aylikFaiz);

    float aylikTaksit = (float)(evinFiyati - pesinat) * (float)((aylikFaiz * pow((1 + aylikFaiz),taksit))/(pow((1 + aylikFaiz),taksit)-1));
    printf("%.2f\n", aylikTaksit);

    if ( aylikTaksit <= aylikOdenebilecekTaksit){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    //Taksit 1
    kalanBorc = evinFiyati - pesinat;
    odenecekFaizMiktari = kalanBorc * aylikFaiz;
    odenecekAnaparaMiktari = aylikTaksit - odenecekFaizMiktari;
    printf("%.2f\n", kalanBorc);
    printf("%.2f\n", odenecekFaizMiktari);
    printf("%.2f\n", odenecekAnaparaMiktari);
    // Taksit 2
    kalanBorc = kalanBorc - aylikTaksit;
    odenecekFaizMiktari = kalanBorc * aylikFaiz;
    odenecekAnaparaMiktari = aylikTaksit - odenecekFaizMiktari;
    printf("%.2f\n", kalanBorc);
    printf("%.2f\n", odenecekFaizMiktari);
    printf("%.2f\n", odenecekAnaparaMiktari);
    //Taksit 3
    kalanBorc = kalanBorc - aylikTaksit;
    odenecekFaizMiktari = kalanBorc * aylikFaiz;
    odenecekAnaparaMiktari = aylikTaksit - odenecekFaizMiktari;
    printf("%.2f\n", kalanBorc);
    printf("%.2f\n", odenecekFaizMiktari);
    printf("%.2f\n", odenecekAnaparaMiktari);
    return 0;
}