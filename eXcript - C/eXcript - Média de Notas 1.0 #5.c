#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("========== M�dia Escolar 1.0 ==========\n\n");
    printf("Digite a sua 1 nota bimestral:");
    scanf("%f", &nota1);
    printf("Digite a sua 2 nota bimestral:");
    scanf("%f", &nota2);
    printf("Digite a sua 3 nota bimestral:");
    scanf("%f", &nota3);
    printf("Digite a sua 4 nota bimestral:");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A sua m�dia escolar foi de: %.2f\n\n", media);

    if(media >= 7){
        printf("Voc� foi aprovado!\n\n");
    }else{
        printf("Voc� foi reprovado!\n\n");
    }

    system("pause");
    return 0;
    
}