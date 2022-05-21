#include <stdio.h>
#include <stdlib.h>
void menu();
void escolha(char c);
int main() {
    char c;
    menu();
    do {
        if (scanf(" %c", &c) == 0) {
            printf("erro");
        }
        escolha(c);
    }while (c!='q');
    return 0;
}
void menu(){
    puts("+-Simple Math -----------------------+");
    puts("|  + <a> <b> - compute a + b         |");
    puts("|  - <a> <b> - compute a - b         |");
    puts("|  * <a> <b> - compute a * b         |");
    puts("|  / <a> <b> - compute a / b         |");
    puts("|  % <a> <b> - compute a % b         |");
    puts("+-Conversions -----------------------+");
    puts("|  h <x>     - x from dec to hex     |");
    puts("|  H <x>     - x from hex to dec     |");
    puts("|  o <x>     - x from dec to oct     |");
    puts("|  O <x>     - x from oct to dec     |");
    puts("|  c <x>     - x from hex to oct     |");
    puts("|  C <x>     - x from oct to hex     |");
    puts("+-Advanced --------------------------+");
    puts("|  ! <n>     - factorial of n        |");
    puts("|  b <n>     - plays buzz up to n    |");
    puts("+-Interface -------------------------+");
    puts("|  h         - print this menu       |");
    puts("|  q         - end program           |");
    puts("+------------------------------------+");
}
void escolha(char c) {
    int a,b;
    short int h;
    unsigned short int i;
    unsigned int j;
    switch (c){
        case '+':
            scanf(" %d %d",&a,&b);
            printf("%d\n",a+b);
            break;
        case '-':
            scanf(" %d %d",&a,&b);
            printf("%d\n",a-b);
            break;
        case '*':
            scanf(" %d %d",&a,&b);
            printf("%d\n",a*b);
            break;
        case '/':
            scanf(" %d %d",&a,&b);
            if(b==0){
                printf("Error division by zero\n");
                break;
            }else {
                printf("%d\n", a/b);
            }
            break;
        case '%':
            scanf(" %d %d",&a,&b);
            if(b==0){
                printf("Error division by zero\n");
                break;
            }else {
                printf("%d\n", a%b);
            }
            break;
        case 'h':
            scanf(" %hd",&h);
            printf("0x%04hX\n",h);
            break;
        case 'H':
            scanf(" %hx",&i);
            printf("%05hd\n", i);
            break;
        case 'o':
            scanf(" %hd",&h);
            printf("0o%06ho\n",h);
            break;
        case 'O':
            scanf(" %ho",&i);
            printf("%05hd\n", i);
            break;
        case 'c':
            scanf(" %hx",&i);
            printf("0o%06ho\n", i);
            break;
        case 'C':
            scanf(" %ho",&i);
            printf("0x%04hX\n", i);
            break;
        case '!':
            scanf(" %u",&j);
            a=1;
            for(unsigned int r=1;r<=j;r++){
                a=a*r;
            }
            printf("%d\n",a);
            break;
        case 'b':
            scanf(" %u",&j);
            a=1;
            for(unsigned int o=1;o<=j;o++) {
                if(o==1){
                    printf("%d\n",o);
                }else if(o%7==0){
                    printf("buzz\n");
                }else if((o-7)%10==0){
                    printf("buzz\n");
                } else{
                    printf("%d\n",o);
                }
            }
            break;
        case 's':
            menu();
            break;
        case 'q':
            printf("Bye\n");
            break;
        default:
            printf("Unknown option\n");
            break;
    }

}