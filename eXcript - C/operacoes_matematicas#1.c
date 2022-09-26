#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("A soma entre as duas variáveis é: %i\n", soma);

    int sub = num1 - num2;
    printf("A subtração entre as duas variáveis é: %i\n", soma);

    int multi = num1 * num2;
    printf("A multiplicação entre as duas variáveis é: %i\n", multi);

    float div = num1 / 3;
    printf("A divisão entre a variável num1 e 3 é: %.2f\n", div);

    system("pause");
    return 0;
    

}
