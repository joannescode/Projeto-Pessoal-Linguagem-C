#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    int soma, sub, multi, div;
    
    printf("Calculadora 1.0\n");
    printf("Por favor digite os dois n�meros a serem processados:\n");
    scanf("%i %i", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("O resultado da soma �:%i\n", soma);
    printf("O resultado da subtra��o �:%i\n", sub);
    printf("O resultado da multiplica��o �:%i\n", multi);
    printf("O resultado da divis�o �:%i\n\n", div);

    system("pause");
    return 0;
}