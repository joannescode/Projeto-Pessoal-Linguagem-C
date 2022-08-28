#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Por favor digite dois números:\n");
    scanf("%i %i", &num1, &num2);

    printf("Os números digitados foram: %i e %i\n", num1, num2);

    system("pause");
    return 0;
}