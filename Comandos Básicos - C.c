/*COMANDOS BÁSICOS C*/

/*incluindo bibliotecas*/
#include <nomedabiblioteca.extensão>
/*exemplo real*/
#include <stdio.h>
#include <stdlib.h>

/*incluindo acentuação nos textos*/
#include <locale.h>
/*Após o "int main"*/
setlocale(LC_ALL, "Portuguese");

/*iniciando código principal*/
int main (){
    /* seu código vai aqui*/
}

/*imprimindo mensagem no terminal*/
printf("Por favor digite o valor:");

/*permitindo digitar valor e lendo o valor*/
scanf("%d", &valor);

/*tipos de variáveis*/
int = /*variável inteira*/
float = /*variável com mais de uma casa númerica*/
bool = /*variável booleana 1 = true, 0 = false*/
char = /*variável letra, exemplo 'x'*/

/*letras utilizadas na leitura da cada variável*/
int = /*scanf("%d", &valor)*/
float = /*scanf("%f", &valor)*/
bool = /*scanf("%d", &valor)*/
char = /*scanf("%c", &valor)*/
/*observe que para indexar a variavel no "valor", utilizamos o & (E comercial)*/

/*Operadores Lógicos*/
=      IGUAL
>      MAIOR QUE
<      MENOR QUE
>=     MAIOR QUE OU IGUAL
<=     MENOR QUE OU IGUAL
<>     DIFERENTE DE
AND    OPERADOR LÓGICO E
OR     OPERADOR LÓGICO OU

/*exemplo de código utilizando variáveis e operadores*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int A, B, R;

    printf("Por favor digite o valor para A:");
    scanf("%d", &A);

    printf("Por favor digite o valor para B:");
    scanf("%d", &B);

    printf("O valor de A é: %d\n", A);
    printf("O valor de B é: %d\n", B);
    printf("O valor de %d + %d = %d\n", A, B, R = A + B);
    
    system("pause");
    return 0;
    
}
/*\n para pular linha no terminal*/

/*função if e else (condicional): caso uma condição seja verdadeira irá realizar um bloco de comando, do contrário irá realizar outro bloco de comando.*/

se(variável,operador lógico,valor){
    imprimi mensagem
}senao{
    imprimi outra mensagem
}

// exemplo:
int x = 10;
if(x>10){
    printf("X é maior que 10");
}else{
    printf("X não é maior que 10");
}
/*sempre utilizamos operadores lógicos para poder realizar a comparação da variável com algum valor*/

/*função while (laço de repetição): while é um repetidor, que sempre irá repetir o bloco de comandos, 
assim atualizando o valor da variável até que o valor seja igual a condição*/

enquanto(condição)faça
    instruções
    atualizar a variável de controle;

// exemplo:
 int contador = 1;
 while (contador<=10){
    printf("%d", contador);
    contador ++
 }

 /*função do while (laço de repetição): do while é um repetidor assim como o while, a sua diferença está que a sua 
 condição é verificada apenas no final do código, executando o repetidor ao menos uma vez*/

faça{
    instruções
    atualizar a variável de controle;
} enquanto(condição)

// exemplo:
do{
    printf("%d", contador);
    contador ++
}while(contador<=10);

/*função for (laço de repetição): diferente do while, o for você utiliza quando você sabe o valor que precisa alcançar com o controlador*/

para(valor inicial, condição final, atualiza variável)faça
    instruções

// exemplo:
for(contador=1, contador<=20, contador++){
    printf("%d", contador);
}

