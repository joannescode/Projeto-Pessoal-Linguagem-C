#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float A, B, R;
    char OP = '0';

    do{
        A, B, R = 0;

        printf("Selecione a opera��o:");
        printf("\n(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(0) sair do programa\n");

        printf("\nInforme a opera��o:");

        OP = getch();
        printf("\n");

        if(OP !='0'){
            printf("Digite o primeiro n�mero:");
            scanf("%f", &A);
            printf("Digite o segundo n�mero:");
            scanf("%f", &B);
            
            if(OP =='1'){
                R = A + B;
            }else{
                if(OP == '2'){
                    R = A - B;
                }else{
                    if(OP == '3'){
                        R = A * B;
                    }else{
                        if(OP == '4'){
                            R = A / B;
                        }
                    }
                }
            }
        }
        
        printf("\nO resultado �: %.2f\n", R);
        printf("\nPressione qualquer tecla para continuar...");
        getch();
        system("cls");

    }while(OP != '0');
    
    return 0;
}