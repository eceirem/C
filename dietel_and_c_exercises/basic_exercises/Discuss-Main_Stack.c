//Discuss
#include <stdio.h>
#include <math.h>
int main(void){
    int c = '\0';
    if ((c = getchar()) != EOF)
    {
        main();
        printf("%c", c);   //Yığın oluşturuluyor ve eof değeri girilince tek tek bu yığınlardın yazıldığı adres sondan başa kapatılarak yazılıyor.
    }
    
    
}
