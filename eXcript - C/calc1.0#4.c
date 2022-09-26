#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    int soma, sub, multi, div;
    
    printf("Calculadora 1.0\n");
    printf("Por favor digite os dois números a serem processados:\n");
    scanf("%i %i", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("O resultado da soma é:%i\n", soma);
    printf("O resultado da subtração é:%i\n", sub);
    printf("O resultado da multiplicação é:%i\n", multi);
    printf("O resultado da divisão é:%i\n\n", div);

    system("pause");
    return 0;
}
