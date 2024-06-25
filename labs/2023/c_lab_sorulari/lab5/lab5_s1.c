#include <stdio.h>
int toplama(int num1, int num2);
int cikarma(int num1, int num2);
int carpma(int num1, int num2);
int bolme(int num1, int num2);
void dortIslem(int num1, int num2, int op);
void print_message(int num1, int num2, int op, int result);
int result;
int main() {
    int num1, num2, op;
    scanf("%d\n%d\n%lc", &num1, &num2, &op);
    //+ 43
    //- 45
    //* 42
    // / 47
    dortIslem(num1, num2, op);    
    return 0;
}
void dortIslem(int num1, int num2, int op){
    switch (op)
    {
    case 43:
        result = toplama(num1, num2);
        print_message(num1, op, num2, result);
        break;
    case 45:
        result = cikarma(num1, num2);
        print_message(num1, op, num2, result);
        break;
    case 42:
        result = carpma( num1, num2);
        print_message(num1, op, num2, result);
        break;
    case 47:
        if (num2 == 0)
        {   
            printf("Payda 0 olduğundan bölme işlemi yapılamaz.");
            break;
        }
        else{
            result = bolme(num1, num2);
            print_message(num1, op, num2, result);
            break;
        }       
    default:
        printf("Beklenmeyen veri girişi\n");
        break;
    }
}
int toplama(int num1, int num2){
    return num1 + num2;
}
int cikarma(int num1, int num2){
    return num1 - num2;
}
int carpma(int num1, int num2){
    return num1 * num2;
}
int bolme(int num1, int num2){
    return num1 / num2;       
}
void print_message(int num1, int op, int num2, int result){
    printf("%d%c%d=%d", num1, op, num2, result);
}