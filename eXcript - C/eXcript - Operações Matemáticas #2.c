#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("A soma entre as duas vari�veis �: %i\n", soma);

    int sub = num1 - num2;
    printf("A subtra��o entre as duas vari�veis �: %i\n", soma);

    int multi = num1 * num2;
    printf("A multiplica��o entre as duas vari�veis �: %i\n", multi);

    float div = num1 / 3;
    printf("A divis�o entre a vari�vel num1 e 3 �: %.2f\n", div);

    system("pause");
    return 0;
    

}